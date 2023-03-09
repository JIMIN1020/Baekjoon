// [1676] 팩토리얼 0의 개수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int count = 0;

        while (N != 0)
        {
            // 5 개수 세기
            count += N / 5;
            N /= 5;
        }
        System.out.println(count);
    }
}