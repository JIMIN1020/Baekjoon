// [9093] 단어 뒤집기
import java.io.*;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine()); // 테스트 케이스
        Stack<Character> word = new Stack<>(); // 스택 생성

        while (T-- != 0)
        {
            String str = br.readLine();

            for (int i = 0; i <= str.length(); i++) {
                // 공백이거나 마지막 문자이면?
                if (i == str.length() || str.charAt(i) == ' ')
                {
                    // 스택에 push 해놓은 단어들 꺼내오기
                    while (!word.empty()) {
                        bw.write(word.pop());
                    }
                    bw.write(' ');    // 공백 출력 (띄어쓰기)
                }
                else word.push(str.charAt(i));  // 공백 아닐 경우엔 스택에 push
            }
            bw.write("\n");
            bw.flush();
        }
        bw.close();
    }
}
