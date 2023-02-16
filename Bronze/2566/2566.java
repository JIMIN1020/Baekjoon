// [2566] 최댓값
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int max = 0, row = 0, col = 0;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++)
            {
                int temp = sc.nextInt();
                if (max <= temp) {
                    max = temp;
                    row = i+1;
                    col = j+1;
                }
            }
        }
        System.out.println(max);
        System.out.println(row + " " + col);
    }
}