// [1977] 완전제곱수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int M = Integer.parseInt(br.readLine());
        int N = Integer.parseInt(br.readLine());
        int min = 0, sum = 0;

        // 1부터 i*i가 N보다 작거나 같을 때까지
        for (int i = 1; i*i <= N; i++)
        {
            if (i*i >= M)
            {
                sum += i*i;
                if (min == 0) // 최소값
                    min = i*i;
            }
        }

        if (sum == 0)
            System.out.println("-1");
        else {
            System.out.println(sum);
            System.out.println(min);
        }
    }
}