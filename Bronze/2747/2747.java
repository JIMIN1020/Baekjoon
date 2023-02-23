// [2747] 피보나치 수
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        // 초기값 : 0번째, 1번째 수
        int a = 0, b = 1, temp;

        for (int i = 0; i < n-1; i++)
        {
            // b에 a+b값 넣고 기존의 b값을 a로 옮기는 과정
            temp = b;
            b += a;
            a = temp;
        }
        System.out.println(b);
    }
}