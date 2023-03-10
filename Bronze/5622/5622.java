// [5622] 다이얼
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String word = br.readLine();

        int sum = 0;
        int[] dial = new int[] {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

        for (int i = 0; i < word.length(); i++) {
            sum += dial[word.charAt(i) - 'A'];
        }
        System.out.println(sum);
    }
}