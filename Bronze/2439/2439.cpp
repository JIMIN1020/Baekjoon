// [2439] 별 찍기 - 2
#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    for (int i = 1; i < n+1; i++) {
        for (int j = n-i; j > 0; j--) cout << " ";
        for (int k = 1; k < i+1; k++) cout << "*";
        cout << "\n";
    }
}
