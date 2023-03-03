// [1978] 소수 찾기
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        String[] s = br.readLine().split(" ");
        int x, count = 0;

        // 소수 판별
        for (int i = 0; i < N; i++) {
            x = Integer.parseInt(s[i]);

            // 2부터 x까지 나누어보기
            for (int j = 2; j <= x; j++) {
                if (x == j) count++;    // j가 x까지 도달하면 소수
                if (x % j == 0) break;  // j로 나누어지면 break
            }
        }
        System.out.println(count);
    }
}
