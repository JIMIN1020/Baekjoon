// [1712] 손익분기점
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        long A = Integer.parseInt(s[0]);
        long B = Integer.parseInt(s[1]);
        long C = Integer.parseInt(s[2]);

        if (B >= C)
            System.out.println("-1");
        else
            System.out.println(A / (C - B) + 1);
    }
}