// [2577] 숫자의 개수
#include <iostream>
using namespace std;

int main(void) {
    int num[10] = {0};
    int A, B, C;
    cin >> A >> B >> C;
    int S = A * B * C;
    
    while (S) {
        num[S%10]++;  // 개수 세기
        S /= 10;      // 10으로 나눠서 제거
    }
    for (int i = 0; i < 10; i++) cout << num[i] << "\n";
}
