// [17608] 막대기
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int cnt = 0, top = 0;

        int[] stick = new int[N];
        for (int i = 0; i < N; i++)
            stick[i] = Integer.parseInt(br.readLine());

        // 배열의 맨 뒤(맨 오른쪽 막대기)부터 확인
        for (int j = N-1; j >= 0; j--)
        {
            // 막대기 높이가 top 보다 크면 카운트
            if (stick[j] > top) {
                cnt++;
                top = stick[j]; // 새로운 top은 해당 막대기가 됨
            }
        }
        System.out.println(cnt);
    }
}