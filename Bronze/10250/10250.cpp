// [10250] ACM 호텔
#include <iostream>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int H, W, N;
        cin >> H >> W >> N;
        
        // 층수 = 고객 순서 (꼭대기 층인 경우)
        if (N % H == 0)
            cout << H * 100 + (N / H) << "\n";
        // 그 외
        else
            cout << (N % H) * 100 + (N / H) + 1 << "\n";
    }
}
