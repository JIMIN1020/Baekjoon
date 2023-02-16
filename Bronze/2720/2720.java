// [2720] 세탁소 사장 동혁
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int C, T = sc.nextInt();

        for (int i = 0; i < T; i++) {
            C = sc.nextInt();
            System.out.println(C/25 + " " + (C%25)/10 + " " + ((C%25)%10)/5 + " " + C%5);
        }
    }
}