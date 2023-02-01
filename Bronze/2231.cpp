// [2231] 분해합
#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    
    int sum = 0, num, check = 0;
    for (int i = 0; i < N; i++) {
        sum = i;  // 분해합
        num = i;  // 각 자리 숫자
        while (num) {
            sum += num % 10;    // 마지막 자리 수 구해서 더하기
            num /= 10;          // 10으로 나눠서 마지막 자리 수 제거
        }
        if (sum == N) {
            cout << i << "\n";
            check = 1;
            break;
        }
    }
    if (check == 0) cout << "0\n";
}
