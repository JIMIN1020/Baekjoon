// [11653] 소인수분해
#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    if (N == 1) return 0;

    while (N > 1) {
        for (int i = 2; i <= N; i++) {
            if (N % i == 0) {
                N /= i;
                cout << i << "\n";
                break;
            }
        }
    }
}
