// [2292] 벌집
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        // 1인 경우?
        if (N == 1) {
            System.out.println("1");
            return;
        }
        // 아닌 경우에는 1 빼주기
        else N--;

        for (int i = 1; ; i++)
        {
            N -= i * 6;
            if (N <= 0) {
                System.out.println(i+1);
                return;
            }
        }
    }
}
