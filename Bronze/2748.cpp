// [2748] 피보나치 수 2
#include <iostream>
using namespace std;

int main(void) {
    long long n;
    cin >> n;
    
    long long a = 0, b = 1;
    for (int i = 0; i < n-1; i++) {
        long long temp = b;
        b += a;
        a = temp;
    }
    cout << b << "\n";
}
