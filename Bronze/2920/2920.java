// [2920] 음계
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");

        int[] arr = new int[8];
        for (int i = 0; i < 8; i++) {
            arr[i] = Integer.parseInt(s[i]);
        }

        // 1이면 내림차순, -1이면 오름차순을 기준으로 판단
        int check = arr[0] - arr[1];

        for (int i = 1; i < 7; i++)
        {
            if (arr[i] - arr[i+1] != check)   // 정렬이 끊기면?
            {
                System.out.println("mixed");  // mixed로 판단
                return;
            }
        }

        if (check == 1)
            System.out.println("descending");
        else if (check == -1)
            System.out.println("ascending");
    }
}