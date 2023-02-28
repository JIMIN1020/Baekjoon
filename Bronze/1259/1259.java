// [1259] 팰린드롬수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while (true) {
            String N = br.readLine();
            String check = "yes"; // 초기값 : yes

            if (N.equals("0")) return;

            for (int i = 0; i < N.length() / 2; i++) {
                // i번째 수 vs (마지막-i)번째 수 비교
                if (N.charAt(i) != N.charAt(N.length()-1-i)) {
                    check = "no";  // 다를 경우 no로 갱신
                    break;
                }
            }
            System.out.println(check);
        }
    }
}