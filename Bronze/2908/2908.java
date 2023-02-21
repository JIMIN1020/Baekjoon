// [2908] 상수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int a = Integer.parseInt(s[0]);
        int b = Integer.parseInt(s[1]);

        a = a%100%10*100 + a%100/10*10 + a/100;
        b = b%100%10*100 + b%100/10*10 + b/100;

        System.out.println(Math.max(a, b));
    }
}