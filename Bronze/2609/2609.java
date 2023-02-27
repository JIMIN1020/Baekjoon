// [2609] 최대공약수와 최소공배수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int a = Integer.parseInt(s[0]);
        int b = Integer.parseInt(s[1]);
        int c = Math.min(a, b);  // a, b 중 더 작은 값 구하기

        // 최대공약수
        int max = 0;
        for (int i = 1; i <= c; i++) {
            if (a % i == 0 && b % i == 0)
                max = i;
        }
        System.out.println(max);

        // 최소공배수
        int min = a * b / max;
        System.out.println(min);
    }
}