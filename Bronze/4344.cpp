// [4344] 평균은 넘겠지
#include <iostream>
using namespace std;

int main(void) {
    cout << fixed;
    cout.precision(3);  // 소수점 이하 3자리
    
    int C, N, score[10001];
    cin >> C;
    
    while (C--) {
        cin >> N;
        double P = 0, avg = 0;
        
        // 입력 받고 누적합
        for (int i = 0; i < N; i++) {
            cin >> score[i];
            avg += score[i];
        }
        
        // 평균보다 높은 점수 찾기
        for (int j = 0; j < N; j++)
            if (score[j] > avg / N) P++;
        
        // 비율 구해서 출력
        cout << P / N * 100 << "%\n";
    }
}
