// [2675] 문자열 반복
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        while (T-- != 0)
        {
            String[] s = br.readLine().split(" ");
            int n = Integer.parseInt(s[0]);

            for (int i = 0; i < s[1].length(); i++) {
                for (int j = 0; j < n; j++)
                    System.out.print(s[1].charAt(i));
            }
            System.out.println();
        }
    }
}