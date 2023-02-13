// [2530] 인공지능 시계

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] s = br.readLine().split(" ");
        int a = Integer.parseInt(s[0]); // 시
        int b = Integer.parseInt(s[1]); // 분
        int c = Integer.parseInt(s[2]); // 초
        int d = Integer.parseInt(br.readLine()); // 총 요리 시간

        c += d;
        b += c / 60;
        c %= 60;
        a += b / 60;
        b %= 60;
        a %= 24;

        System.out.println(a + " " + b + " " + c);
    }
}