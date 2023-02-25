// [1157] 단어공부
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String word = br.readLine();

        int max = 0, index = 0;
        int[] count = new int[26];  // 알파벳 카운트

        // 알파벳 수 카운트 하기
        for (int i = 0; i < word.length(); i++)
            count[(word.charAt(i) - 'A') % 32] += 1;

        // 최댓값 찾기
        for (int j = 0; j < 26; j++)
        {
            if (count[j] > max) {
                max = count[j];
                index = j;
            }
        }

        // 최댓값 중복 찾기
        for (int j = 0; j < 26; j++)
        {
            if (j != index && count[j] == max) {
                System.out.println("?");
                return;
            }
        }

        // 출력
        System.out.println((char)('A' + index));
    }
}