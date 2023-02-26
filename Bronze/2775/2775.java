// [2775] 부녀회장이 될테야
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        while (T-- != 0)
        {
            int[][] apart = new int[15][15];
            int k = Integer.parseInt(br.readLine()); // 층수
            int n = Integer.parseInt(br.readLine()); // 호수

            // 0층
            for (int i = 1; i <= n; i++)
                apart[0][i] = i;

            // 1층 ~ k층
            for (int i = 1; i <= k; i++) {
                for (int j = 1; j <= n; j++) {
                    apart[i][j] = apart[i-1][j] + apart[i][j-1];
                }
            }

            System.out.println(apart[k][n]);
        }
    }
}