// [2562] 최댓값
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int max = 0, index = 0, x;

        for (int i = 0; i < 9; i++)
        {
            x = sc.nextInt();
            if (max < x) {
                max = x;
                index = i + 1;
            }
        }
        System.out.println(max + " " + index);
    }
}