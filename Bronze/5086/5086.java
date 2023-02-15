// [5086] 배수와 약수
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a, b;

        while (true) {
            a = sc.nextInt();
            b = sc.nextInt();

            if (a == 0 && b == 0)
                return;

            // 배수라면?
            if (a % b == 0)
                System.out.println("multiple");

            // 약수라면?
            else if (b % a == 0)
                System.out.println("factor");

            else
                System.out.println("neither");
        }
    }
}