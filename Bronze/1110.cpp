// [1110] 더하기 사이클
#include <iostream>
using namespace std;

int main(void) {
    int N, cnt = 0;
    cin >> N;
    int a = N / 10;     // N의 십의자리 수로 초기화
    int b = N % 10;     // N의 일의자리 수로 초기화
    int c = -1;         // 새로운 수가 들어갈 변수, N이 0일 경우를 대비해서 -1로 초기화

    while (c != N) {
        c = b * 10 + (a + b) % 10;
        a = c / 10;
        b = c % 10;
        cnt++;
    }
    cout << cnt << "\n";
}
