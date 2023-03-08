// [1316] 그룹 단어 체커
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int count = N;  // 전체 단어 수
        String s;       // 단어를 입력받을 변수

        while (N-- != 0)
        {
            s = br.readLine();
            int[] alpha = new int[26];  // 알파벳 존재 여부 체크할 배열
            alpha[s.charAt(0) - 'a'] = 1;   // 첫번째 문자는 우선 1로 갱신

            for (int i = 1; i < s.length(); i++)
            {
                // i번째와 i-1번째가 같지 않으면서, i번째 문자가 이전에 이미 나왔을 경우?
                if (s.charAt(i) != s.charAt(i-1) && alpha[s.charAt(i) - 'a'] == 1) {
                    count--;  // 전체 단어 수에서 1 빼기
                    break;
                }
                // 위에 해당하지 않는 경우 1로 갱신
                alpha[s.charAt(i) - 'a'] = 1;
            }
        }
        System.out.println(count);
    }
}
