// [2501] 약수 구하기
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();

        for (int i = 1; i <= N; i++)
        {
            // 약수 찾을 때마다 K값 감소
            if (N % i == 0) K--;

            // K가 0이 되는 순간 값 출력
            if (K == 0) {
                System.out.println(i);
                return;
            }
        }
        // 약수가 K개 보다 적을 경우
        if (K != 0)
            System.out.println("0");
    }
}