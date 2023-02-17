// [2525] 오븐시계
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int hour = sc.nextInt();
        int min = sc.nextInt();
        int need_t = sc.nextInt();

        hour = (hour + (min + need_t) / 60) % 24;
        min = (min + need_t) % 60;

        System.out.println(hour + " " + min);

    }
}