// [9455] 박스
#include <iostream>
using namespace std;

int main(void) {
    int T, m, n;
    cin >> T;
    
    while (T--) {
        int count = 0;
        int box[100][100];
        cin >> m >> n;
        
        // 배열에 입력 받기
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) { cin >> box[i][j]; }
        }
        
        // 이동거리 계산
        for (int i = 0; i < n; i++) {
            for (int j = m-2; j >= 0; j--)
            {
                // 박스가 놓여있다면?
                if (box[j][i] == 1)
                {
                    // 현재위치 아래 칸부터 끝까지 0 개수 세기 (이동거리)
                    for (int k = j+1; k < m; k++) {
                        if (box[k][i] == 0) { count++; }
                    }
                }
            }
        }
        cout << count << "\n";
    }
}
