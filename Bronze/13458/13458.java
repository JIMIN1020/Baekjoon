// [13458] 시험 감독
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine()); // 시험장 개수
        long cnt = 0;   // 감독관 수


        int[] A = new int[N];  // 시험장 별 학생 수를 담을 배열
        String[] s = br.readLine().split(" ");

        for (int i = 0; i < N; i++)
            A[i] = Integer.parseInt(s[i]);

        s = br.readLine().split(" ");
        int B = Integer.parseInt(s[0]); // 총감독관
        int C = Integer.parseInt(s[1]); // 부감독관

        for (int j = 0; j < N; j++)
        {
            // 총감독관
            A[j] -= B;                  // 총감독관이 감독할 수 있는 수 빼기
            cnt++;                      // 총감독관 1명 추가
            if (A[j] <= 0) continue;    // 총감독관 1명만 있어도 되는 경우 넘어감

            // 부감독관
            cnt += A[j] / C;            // 부감독관이 감독할 수 있는 수로 나눈 몫 = 부감독관 수
            if (A[j] % C != 0) cnt++;   // 나누고 남은 경우 부감독관 1명 추가
        }
        System.out.println(cnt);
    }
}