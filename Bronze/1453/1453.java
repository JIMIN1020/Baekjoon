// [1453] 피시방 알바
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine()); // 손님 수
        int[] seat = new int[101];  // 자리 번호
        int cnt = 0; // 거절당한 손님 수
        int x;  // 손님이 원하는 자리

        String[] s = br.readLine().split(" ");
        for (int i = 0; i < N; i++)
        {
            x = Integer.parseInt(s[i]);
            if (seat[x] == 0)   // 자리가 있는 경우
                seat[x] = 1;
            else cnt++;         // 자리가 없는 경우
        }
        System.out.println(cnt);
    }
}