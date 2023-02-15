// [10250] ACM 호텔
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        int H, W, N;

        for (int i = 0; i < T; i++)
        {
            H = sc.nextInt();
            W = sc.nextInt();
            N = sc.nextInt();

            // 층수 = 고객 순서 (꼭대기 층인 경우)
            if (N % H == 0)
                System.out.println(H * 100 + (N / H));
            // 그 외
            else
                System.out.println((N % H) * 100 + (N / H) + 1);
        }
    }
}