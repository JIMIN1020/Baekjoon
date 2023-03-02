// [2869] 달팽이는 올라가고 싶다
#include <iostream>
using namespace std;

int main(void) {
    long A, B, V, T = 0;
    cin >> A >> B >> V;
    
    T = (V - A) / (A - B);
    
    // 나머지가 0이 아니라면 +2, 0이라면 +1
    if ((V - A) % (A - B)) cout << T+2 << "\n";
    else cout << T+1 << "\n";
}
