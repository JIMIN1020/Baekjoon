// [1924] 2007년
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int x = Integer.parseInt(s[0]);
        int y = Integer.parseInt(s[1]);

        String[] day = new String[] {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
        int[] last_day = new int[] {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int sum = 0;
        // 1~(x-1)월의 모든 일 수 합하기
        for (int i = 1; i < x; i++) {
            sum += last_day[i];
        }

        // x월의 y일 합하기
        sum += y;

        // 일주일(7)로 나눈 나머지를 인덱스로 사용하여 출력
        System.out.println(day[sum%7]);
    }
}