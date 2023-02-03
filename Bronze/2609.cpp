// [2609] 최대공약수와 최소공배수
#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, max = 0, min = 0;;
    cin >> a >> b;
    c = (a > b) ? b : a;  // 더 작은 값 구하기

    // 최대공약수
    for (int i = 1; i < c+1; i++)
        if (a % i == 0 && b % i == 0) max = i;
    cout << max << "\n";
    
    // 최소공배수
    min = a * b / max;
    cout << min << "\n";
}
