// [4344] 평균은 넘겠지
#include <iostream>
using namespace std;

int main(void)
{
    cout << fixed;
    cout.precision(3);  // 소수점 이하 3자리
    
    int C, N;
    cin >> C;
    
    while (C--)
    {
        cin >> N;
        int* score = new int[N];
        
        // pass: 평균을 넘는 학생들 / avg: 평균
        double pass = 0, avg = 0;
        
        // 입력 받고 누적합
        for (int i = 0; i < N; i++) {
            cin >> score[i];
            avg += score[i];
        }
        avg /= N;   // 평균 구하기
        
        // 평균보다 높은 점수 찾기
        for (int j = 0; j < N; j++)
            if (score[j] > avg) pass++;
        
        // 비율 구해서 출력
        cout << pass / N * 100 << "%\n";
        delete[] score;
    }
}
