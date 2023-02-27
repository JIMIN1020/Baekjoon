// [2309] 일곱 난쟁이
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] arr = new int[9];
        int sum = 0;
        for (int i = 0; i < 9; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            sum += arr[i];
        }
        Arrays.sort(arr);

        // 일곱 난쟁이 찾기
        exit : for (int i = 0; i < 8; i++) {
            for (int j = i + 1; j < 9; j++)
            {
                // 합에서 난쟁이 2명의 키를 뺀 값이 100이면?
                if ((sum - arr[i] - arr[j]) == 100) {
                    arr[i] = 0;  // 해당하는 난쟁이 키는 0으로 만듦
                    arr[j] = 0;
                    break exit;  // 반복문 탈출
                }
            }
        }
        // 출력
        for (int i = 0; i < 9; i++) {
            if (arr[i] > 0)
                System.out.println(arr[i]);
        }
    }
}