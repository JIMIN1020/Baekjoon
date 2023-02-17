// [2576] 홀수
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n, sum = 0, min = 100;

        for (int i = 0; i < 7; i++)
        {
            n = sc.nextInt();
            // 홀수 일 경우 합한 후 최솟값 비교
            if (n % 2 != 0) {
                sum += n;
                if (n < min) min = n;
            }
        }

        if (sum == 0)
            System.out.println("-1");
        else {
            System.out.println(sum);
            System.out.println(min);
        }
    }
}