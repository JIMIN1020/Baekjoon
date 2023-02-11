// [25304] 영수증
#include <iostream>
using namespace std;

int main(void) {
    int X, N, a, b;
    cin >> X >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        X -= a * b;
    }
    if (X) cout << "No\n";
    else cout << "Yes\n";
}
