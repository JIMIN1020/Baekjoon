// [2869] 달팽이는 올라가고 싶다
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int A = Integer.parseInt(s[0]);
        int B = Integer.parseInt(s[1]);
        int V = Integer.parseInt(s[2]);

        int T = (V - A) / (A - B);  // 정상 도달 직전까지의 일 수

        // 나머지가 0이 아니라면 +2, 0이라면 +1
        if ((V - A) % (A - B) != 0)
            System.out.println(T + 2);
        else
            System.out.println(T + 1);
    }
}
