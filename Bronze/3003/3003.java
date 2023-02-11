// [3003] 킹, 퀸, 룩, 비숍, 나이트, 폰
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[] piece = new int[] {1, 1, 2, 2, 2, 8};
        int n;

        for (int i = 0; i < 6; i++) {
            n = sc.nextInt();
            piece[i] -= n;
            System.out.print(piece[i] + " ");
        }
        sc.close();
    }
}