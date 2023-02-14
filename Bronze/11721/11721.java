// [11721] 열 개씩 끊어 출력하기
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        for (int i = 0; i < str.length(); i++)
        {
            System.out.print(str.charAt(i));

            // 10개 출력 후 줄바꿈
            if (i % 10 == 9)
                System.out.println();
        }
    }
}