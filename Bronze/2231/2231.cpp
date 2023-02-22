// [2231] 분해합
#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    int sum, num;
    for (int i = 0; i < N; i++)
    {
        sum = i;  // 분해합
        num = i;  // 각 자리 숫자
        
        // 분해합 구하기
        while (num)
        {
            sum += num % 10;    // 일의자리 수 더하기
            num /= 10;          // 10으로 나눠서 일의자리 수 제거
        }
        
        // 분해합이 N과 같은 경우 출력 후 종료
        if (sum == N) {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "0\n";
}
