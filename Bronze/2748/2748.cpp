// [2748] 피보나치 수 2
#include <iostream>
using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    
    // 초기값 : 0번째, 1번째 수
    long long a = 0, b = 1;
    
    for (int i = 0; i < n-1; i++) {
        // b에 a+b값 넣고 기존의 b 값을 a로 옮기는 과정
        long long temp = b;
        b += a;
        a = temp;
    }
    cout << b << "\n";
}
