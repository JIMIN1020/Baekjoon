// [14696] 딱지놀이
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        while (N-- != 0)
        {
            int a, b;
            int[] A = new int[5];
            int[] B = new int[5];
            int count = 0;

            // a 입력 받기
            String[] s = br.readLine().split(" ");
            int aN = Integer.parseInt(s[0]);    // a의 개수
            for (int i = 1; i <= aN; i++) {
                a = Integer.parseInt(s[i]);  // 변수에 입력 받은 후
                A[a]++;    // 그 값을 인덱스로 사용하여 1 증가시킴 (개수 세기)
            }
            // b 입력 받기
            s = br.readLine().split(" ");
            int bN = Integer.parseInt(s[0]);    // b의 개수
            for (int i = 1; i <= bN; i++) {
                b = Integer.parseInt(s[i]);
                B[b]++;
            }

            // 개수 비교 (4부터 내림차순으로)
            for (int i = 4; i > 0; i--) {
                if (A[i] > B[i]) {
                    System.out.println("A");
                    break;
                }
                else if (A[i] < B[i]) {
                    System.out.println("B");
                    break;
                }
                else count++;  // 개수가 똑같을 경우 카운트
            }
            // 4개 모두 개수가 같을 경우 무승부
            if (count == 4) System.out.println("D");
        }
    }
}
