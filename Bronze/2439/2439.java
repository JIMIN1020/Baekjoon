// [2439] 별 찍기 - 2

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        for (int i = 1; i < n+1; i++) {
            for (int j = n-i; j > 0; j--)
                System.out.print(" ");
            for (int k = 1; k < i+1; k++)
                System.out.print("*");
            System.out.println();
        }
    }
}