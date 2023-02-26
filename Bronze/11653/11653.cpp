// [11653] 소인수분해
#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    if (N == 1) return 0;

    while (N > 1)
    {
        // 2부터 나누어 떨어지는지 확인
        for (int i = 2; i <= N; i++) {
            // 나누어 떨어지면?
            if (N % i == 0) {
                N /= i;
                cout << i << "\n";
                break;  // 나누고 i를 출력한 뒤 다시 반복문 시작
            }
        }
    }
}
