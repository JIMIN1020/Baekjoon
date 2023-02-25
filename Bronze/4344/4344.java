// [4344] 평균은 넘겠지
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int C = Integer.parseInt(br.readLine());

        int N;
        String[] s;
        while (C-- != 0)
        {
            s = br.readLine().split(" ");
            N = Integer.parseInt(s[0]);
            int[] score = new int[N];

            // pass: 평균을 넘는 학생들 / avg: 평균
            double pass = 0, avg = 0;

            // 입력 받고 누적합
            for (int i = 1; i <= N; i++) {
                score[i-1] = Integer.parseInt(s[i]);
                avg += score[i-1];
            }
            avg /= N;   // 평균 구하기

            // 평균보다 높은 점수 찾기
            for (int j = 0; j < N; j++)
                if (score[j] > avg) pass++;

            // 비율 구해서 출력
            System.out.printf("%.3f%%\n", pass / N * 100);
        }
    }
}