// [11655] ROT13
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        StringBuilder sb = new StringBuilder();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        for (int i = 0; i < str.length(); i++)
        {
            // 대문자일 경우?
            if (str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
            {
                if (str.charAt(i) + 13 > 90)
                    sb.append((char)(str.charAt(i)-13));
                else
                    sb.append((char)(str.charAt(i)+13));
            }
            // 소문자일 경우?
            else if (str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
            {
                if (str.charAt(i) + 13 > 122)
                    sb.append((char)(str.charAt(i)-13));
                else
                    sb.append((char)(str.charAt(i)+13));
            }
            // 공백, 숫자인 경우
            else
                sb.append(str.charAt(i));
        }
        System.out.println(sb);
    }
}