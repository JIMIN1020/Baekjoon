// [2798] 블랙잭
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int N = Integer.parseInt(s[0]);
        int M = Integer.parseInt(s[1]);

        s = br.readLine().split(" ");
        int[] card = new int[N];
        for (int i = 0; i < N; i++)
            card[i] = Integer.parseInt(s[i]);

        int result = 0;
        for (int i = 0; i < N-2; i++) {
            for (int j = i+1; j < N-1; j++) {
                for (int k = j+1; k < N; k++)
                {
                    // 카드 3개 조합
                    int sum = card[i] + card[j] + card[k];

                    // M값과 같은 경우 출력 후 종료
                    if (sum == M) {
                        System.out.println(sum);
                        return;
                    }
                    // M값 보다 작고 기존의 result 값보다 큰 경우 갱신
                    else if (sum < M && sum > result)
                        result = sum;
                }
            }
        }
        System.out.println(result);
    }
}