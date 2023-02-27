// [2609] 최대공약수와 최소공배수
#include <iostream>
using namespace std;

int Euclid(int a, int b)
{
    int c = a % b;
    
    if (a > b) {
        while (c != 0) {
            a = b;      // 작은 수 담기
            b = c;      // 앞선 연산의 나머지 담기
            c = a % b;  // 큰 수를 작은 수로 mod 연산
        }
        return b;   // 마지막 mod 연산에 사용된 값 반환
    }
    else {
        while (c != 0) {
            b = a;
            a = c;
            c = b % a;
        }
        return a;
    }
}

int main(void)
{
    int a, b;
    cin >> a >> b;

    // 최대공약수 (유클리드 호제법)
    int max = Euclid(a, b);
    cout << max << "\n";
    
    // 최소공배수
    int min = a * b / max;
    cout << min << "\n";
}
