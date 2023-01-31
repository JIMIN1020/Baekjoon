// [2292] 벌집
#include <iostream>
using namespace std;

int main(void) {
    long N;
    cin >> N;
    
    // 1인 경우?
    if (N == 1) {
        cout << "1\n";
        return 0;
    }
    // 아닌 경우에는 1 값 빼주기
    else N--;
    
    for (int i = 1; ; i++) {
        N -= i * 6;
        if (N <= 0) {
            cout << i+1 << "\n";
            break;
        }
    }
    return 0;
}
