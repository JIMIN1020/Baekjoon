// [1152] 단어의 개수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        int count = 1;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ') count++;
        }

        // 첫 문자가 공백일 때
        if (str.charAt(0) == ' ') count--;

        // 마지막 문자가 공백일 때
        if (str.charAt(str.length()-1) == ' ') count--;

        System.out.println(count);
    }
}