// [4153] 직각삼각형
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a, b, c;

        while (true) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            if (a == 0 || b == 0 || c == 0)
                return;

            if (a*a == c*c + b*b || b*b == c*c + a*a || c*c == a*a + b*b)
                System.out.println("right");
            else
                System.out.println("wrong");
        }
    }
}