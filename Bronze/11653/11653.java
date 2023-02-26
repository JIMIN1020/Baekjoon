// [11653] 소인수분해
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        if (N == 1) return;

        while (N > 1)
        {
            // 2부터 나누어 떨어지는지 확인
            for (int i = 2; i <= N; i++) {
                // 나누어 떨어지면?
                if (N % i == 0) {
                    N /= i;
                    System.out.println(i);
                    break;  // 나누고 i를 출력한 뒤 다시 반복문 시작
                }
            }
        }
    }
}