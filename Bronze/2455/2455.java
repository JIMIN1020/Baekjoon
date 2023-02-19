// [2455] 지능형 기차
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int max = 0, num = 0;
        String[] s;

        for (int i = 0; i < 4; i++)
        {
            s = br.readLine().split(" ");
            num -= Integer.parseInt(s[0]);  // 내린 사람
            num += Integer.parseInt(s[1]);  // 탄 사람
            if (max < num) max = num;
        }
        System.out.println(max);
    }
}
