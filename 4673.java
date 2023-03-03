// [4673] 셀프 넘버
public class Main {
    public static void main(String[] args) {
        boolean[] arr = new boolean[10001];  // 분해합 확인 할 배열

        // 1~10000까지 분해합 구하기
        for (int i = 1; i < 10001; i++)
        {
            int sum = i;
            int num = i;

            while (num != 0) {
                sum += num % 10;  // 한 자리씩 더하기
                num /= 10;
            }
            if (sum <= 10000) arr[sum] = true;  // 분해합 체크
        }

        for (int j = 1; j < 10001; j++) {
            if (!arr[j])
                System.out.println(j);
        }
    }
}}