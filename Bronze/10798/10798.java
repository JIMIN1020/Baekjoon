// [10798] 세로읽기
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = new String[5];

        for (int i = 0; i < 5; i++)
            str[i] = br.readLine();

        // 세로로 읽어서 출력하기
        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 5; j++)
            {
                // 다 출력한 문자열은 패스
                if (str[j].length() > i)
                    System.out.print(str[j].charAt(i));
            }
        }
        System.out.println();
    }
}