// [17608] 막대기
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        long A = Long.parseLong(s[0]);
        long B = Long.parseLong(s[1]);

        // A = B인 경우
        if (A == B)
            System.out.println("0");

        // A > B인 경우
        else if (A > B)
        {
            System.out.println(A - B - 1);  // B~A 사이 정수의 개수

            for (long i = B+1; i < A; i++)
                System.out.print(i + " ");
            System.out.println();
        }

        // A < B인 경우
        else if (A < B)
        {
            System.out.println(B - A - 1);  // A~B 사이 정수의 개수

            for (long i = A+1; i < B; i++) // 정수 출력
                System.out.print(i + " ");
            System.out.println();
        }
    }
}