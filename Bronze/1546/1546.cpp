// [1546] 평균
#include <iostream>
using namespace std;

int main(void)
{
    int N, M = 0;
    cin >> N;
    
    double result = 0;
    int *score = new int[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> score[i];
        result += score[i]; // 누적합
        
        if (score[i] > M)   // 최댓값 구하기
            M = score[i];
    }
    // 새로운 평균 산출
    result = result / M * 100 / N;
    cout << result << "\n";
}
