// [17608] 막대기
#include <iostream>
using namespace std;

int main(void) {
    int N, cnt = 0, top = 0;
    cin >> N;
    int *stick = new int[N];
    for (int i = 0; i < N; i++) cin >> stick[i];
    
    for (int j = N-1; j >= 0; j--)
        if (stick[j] > top) {
            cnt++;
            top = stick[j];
        }
    cout << cnt << "\n";
}
