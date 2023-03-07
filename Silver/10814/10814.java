// [10814] 나이순 정렬
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        // 입력받기
        String[][] person = new String[N][2];
        for (int i = 0; i < N; i++) {
            String[] s = br.readLine().split(" ");
            person[i][0] = s[0];    // 나이
            person[i][1] = s[1];    // 이름
        }

        // 정렬하기 (나이순)
        Arrays.sort(person, new Comparator<String[]>() {
            @Override
            public int compare(String[] o1, String[] o2) {
                // 정수로 바꾼 후 비교
                return Integer.parseInt(o1[0]) - Integer.parseInt(o2[0]);

            }
        });

        // 출력
        for (int i = 0; i < N; i++)
            System.out.println(person[i][0] + " " + person[i][1]);
    }
}
