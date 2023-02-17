// [2490] 윷놀이
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        for (int i = 0; i < 3; i++)
        {
            String[] s = br.readLine().split(" ");
            int sum = Integer.parseInt(s[0]) + Integer.parseInt(s[1]) + Integer.parseInt(s[2]) + Integer.parseInt(s[3]);

            if (sum == 4) System.out.println("E");
            else if (sum == 3) System.out.println("A");
            else if (sum == 2) System.out.println("B");
            else if (sum == 1) System.out.println("C");
            else System.out.println("D");
        }
    }
}