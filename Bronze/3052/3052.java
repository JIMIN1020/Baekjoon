// [3052] 나머지
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr = new int[42];
        int count = 0, n;

        for (int i = 0; i < 10; i++)
        {
            n = Integer.parseInt(br.readLine());
            if (arr[n % 42] == 0) {
                arr[n % 42] = 1;
                count++;
            }
        }
        System.out.println(count);
    }
}
