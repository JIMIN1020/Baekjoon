// [2884] 알람시계
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int h = Integer.parseInt(s[0]);
        int m = Integer.parseInt(s[1]);

        if (m >= 45) m -= 45;
        else {
            if (h == 0) h = 23;
            else h--;
            m += 15;
        }
        System.out.println(h + " " + m);
    }
}