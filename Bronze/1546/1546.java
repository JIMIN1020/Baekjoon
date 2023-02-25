// [1546] 평균
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String[] s = br.readLine().split(" ");

        int M = 0;  // 최댓값
        double result = 0;  // 최종 평균
        int[] score = new int[N];   // 성적을 담을 배열

        for (int i = 0; i < N; i++)
        {
            score[i] = Integer.parseInt(s[i]);
            result += score[i]; // 누적합

            if (score[i] > M)   // 최댓값 구하기
                M = score[i];
        }
        // 새로운 평균 산출
        result = result / M * 100 / N;
        System.out.println(result);
    }
}