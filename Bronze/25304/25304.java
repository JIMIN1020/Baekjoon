// [25304] 영수증
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int X, N, a, b;
        X = sc.nextInt();
        N = sc.nextInt();

        for (int i = 0; i < N; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            X -= a * b;
        }
        sc.close();

        if (X == 0) System.out.println("Yes");
        else System.out.println("No");
    }
}