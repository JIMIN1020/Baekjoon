// [17608] 막대기
#include <iostream>
using namespace std;

int main(void)
{
    int N, cnt = 0, top = 0;
    cin >> N;
    
    int *stick = new int[N];
    for (int i = 0; i < N; i++)
        cin >> stick[i];
    
    // 배열의 맨 뒤(맨 오른쪽 막대기)부터 확인
    for (int j = N-1; j >= 0; j--)
    {
        // 막대기 높이가 top 보다 크면 카운트
        if (stick[j] > top) {
            cnt++;
            top = stick[j]; // 새로운 top은 해당 막대기가 됨
        }
    }
    cout << cnt << "\n";
}
