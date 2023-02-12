// [10162] 전자레인지
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        int A, B, C;    // 5m, 1m, 10s
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.close();

        A = (T / 60) / 5;   // 5분
        B = (T / 60) % 5;   // 1분
        C = (T % 60) / 10;  // 10초

        if ((T % 60) % 10 > 0) System.out.println("-1");
        else System.out.println(A + " " + B + " " + C);
    }
}