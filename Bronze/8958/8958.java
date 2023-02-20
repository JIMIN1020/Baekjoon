// [8958] OX 퀴즈
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        while (N-- != 0)
        {
            String str = br.readLine();
            int sum = 0, ac = 0;

            for (int i = 0; i < str.length(); i++)
            {
                if (str.charAt(i) == 'O') {
                    ac += 1;
                    sum += ac;
                } else
                    ac = 0;
            }
            System.out.println(sum);
        }
    }
}