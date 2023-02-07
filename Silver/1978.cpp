// [1978] 소수 찾기
#include <iostream>
using namespace std;

int main(void) {
    int N, x, count = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> x;
        for (int j = 2; j <= x; j++) {
            if (x == j) count++;
            if (x % j == 0) break;
        }
    }
    cout << count << "\n";
}
