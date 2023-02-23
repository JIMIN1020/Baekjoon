// [5585] 거스름돈
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // 지불할 돈
        int p = Integer.parseInt(br.readLine());

        int count = 0;  // 잔돈 개수
        p = 1000 - p;   // 잔돈

        count += p/500 + p%500/100 + p%100/50 + p%50/10 + p%10/5 + p%5;
        System.out.println(count);
    }
}