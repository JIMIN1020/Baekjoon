// [2231] 분해합
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        int sum, num;
        for (int i = 0; i < N; i++)
        {
            sum = i;    // 분해합
            num = i;

            // 분해합 구하기
            while (num != 0)
            {
                sum += num % 10;    // 일의자리 수 구해서 더하기
                num /= 10;          // 10으로 나눠서 일의자리 수 제거
            }

            // 분해합이 N과 같은 경우 출력 후 종료
            if (sum == N) {
                System.out.println(i);
                return;
            }
        }
        System.out.println("0");
    }
}