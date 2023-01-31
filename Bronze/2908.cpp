// [2908] 상수
#include <iostream>
using namespace std;

int main(void) {
    int A, B;
    cin >> A >> B;
    A = A%100%10*100 + A%100/10*10 + A/100;
    B = B%100%10*100 + B%100/10*10 + B/100;
    if (A > B) cout << A << "\n";
    else cout << B << "\n";
}
