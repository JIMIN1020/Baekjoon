// [1181] 단어 정렬
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        String[] str = new String[N];
        for (int i = 0; i < N; i++)
            str[i] = br.readLine();

        // 정렬하기 (Arrays.sort 재정의)
        Arrays.sort(str, new Comparator<String>() {
                    @Override
                    public int compare(String o1, String o2) {
                        // 길이가 같은 경우 사전순으로 비교
                        if (o1.length() == o2.length())
                            return o1.compareTo(o2);
                        // 길이가 다른 경우 길이 순으로 비교
                        else
                            return o1.length() - o2.length();
                    }
                });

        // 출력 (같은 단어는 무시)
        System.out.println(str[0]);
        for (int i = 1; i < N; i++) {
            if (!str[i-1].equals(str[i]))
                System.out.println(str[i]);
        }
    }
}