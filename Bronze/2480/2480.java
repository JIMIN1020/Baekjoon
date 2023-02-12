// [2480] 주사위 세개
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        int a, b, c;    // 주사위 세개
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        sc.close();

        // 모두 같을 경우
        if (a == b && b == c)
            System.out.println(10000 + a * 1000);

        // 2개가 같을 경우
        else if (a == b || b == c || a == c) {
            if (a == b || a == c) System.out.println(1000+a*100);
            else System.out.println(1000+b*100);
        }

        // 모두 다를 경우
        else {
            int d = Math.max(a, b);
            int e = Math.max(d, c);
            System.out.println(e*100);
        }
    }
}