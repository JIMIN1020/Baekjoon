// [10815] 숫자 카드
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] card = new int[N];    // 상근이가 가지고 있는 카드
        StringTokenizer st = new StringTokenizer(br.readLine());

        for (int i = 0; i < N; i++)
            card[i] = Integer.parseInt(st.nextToken());

        Arrays.sort(card);  // 정렬하기

        int M = Integer.parseInt(br.readLine());
        int[] num = new int[M];     // 찾을 숫자
        st = new StringTokenizer(br.readLine());

        for (int i = 0; i < M; i++)
            num[i] = Integer.parseInt(st.nextToken());

        // 이진 탐색 후 출력
        for (int i = 0; i < M; i++)
            System.out.print(binary_search(card, N, num[i]) + " ");
    }

    // 이진 탐색 함수
    public static int binary_search(int[] arr, int len, int target)
    {
        int low = 0;
        int high = len - 1;
        int mid;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (arr[mid] == target)
                return 1;

            if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return 0;
    }
}
