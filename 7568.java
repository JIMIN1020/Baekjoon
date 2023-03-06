// [7568] 덩치
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        String[] s; // 입력용

        int[] kg = new int[N];  // 몸무게
        int[] cm = new int[N];  // 키

        // 입력 받기
        for (int i = 0; i < N; i++) {
            s = br.readLine().split(" ");
            kg[i] = Integer.parseInt(s[0]);
            cm[i] = Integer.parseInt(s[1]);
        }

        for (int i = 0; i < N; i++)
        {
            int rank = 1;

            for (int j = 0; j < N; j++)
            {
                // 비교 대상보다 몸무게가 작고 키가 작은 경우 등수 증가
                if (kg[j] > kg[i] && cm[j] > cm[i])
                    rank++;
            }
            System.out.print(rank + " ");
        }
        System.out.println();
    }
}