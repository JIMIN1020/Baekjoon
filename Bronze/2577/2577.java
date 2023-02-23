// [2577] 숫자의 개수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = 1;  // A x B x C
        for (int i = 0; i < 3; i++) {
            N *= Integer.parseInt(br.readLine());
        }

        int[] num = new int[10];    // 0~9 개수를 셀 배열
        while (N != 0) {
            num[N % 10]++;  // 일의 자리 수를 인덱스로 사용
            N /= 10;        // 일의 자리 수 제거
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(num[i]);
        }
    }
}