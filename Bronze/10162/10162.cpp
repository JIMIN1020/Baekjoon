// [10162] 전자레인지
#include <iostream>
using namespace std;

int main(void) {
    int T, A = 0, B = 0, C = 0; // 5m, 1m, 10s
    cin >> T;
    
    A = (T / 60) / 5;   // 5분
    B = (T / 60) % 5;   // 1분
    C = (T % 60) / 10;  // 10초
    
    if ((T % 60) % 10) cout << "-1\n";
    else cout << A << " " << B << " " << C << "\n";
}
