// [1010] 다리 놓기
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main
{
    public static int combi(int n, int r) {
        int result = 1;
        int k = 1;

        // n ~ n-r+1까지 곱하기 & 1 ~ r까지 값으로 나누기
        for (int i = n; i > n - r; i--, k++) {
            // 범위 초과를 감안하여 곱한 후 나누기 반복
            result *= i;
            result /= k;
        }
        return result;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int n, r;
        String[] s;

        while (T-- != 0) {
            s = br.readLine().split(" ");
            r = Integer.parseInt(s[0]);
            n = Integer.parseInt(s[1]);
            System.out.println(combi(n, r));
        }
    }
}
