// [10809] 알파벳 찾기
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        sc.close();

        for (int i = 'a'; i < 'z'+1; i++)
        {
            int check = -1;
            for (int j = 0; j < str.length(); j++)
            {
                if (str.charAt(j) == i) {
                    check = j;
                    break;
                }
            }
            System.out.print(check + " ");
        }
    }
}