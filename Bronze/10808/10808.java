// [10808] 알파벳 개수
import java.util.Scanner;

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        sc.close();

        for (int i = 'a'; i < 'z'+1; i++) {
            int count = 0;
            for (int j = 0; j < str.length(); j++) {
                if (str.charAt(j) == i) count++;
            }
            System.out.print(count + " ");
        }
    }
}