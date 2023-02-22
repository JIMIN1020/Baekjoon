// [2798] 블랙잭
#include <iostream>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    
    int *card = new int[N];
    for (int i = 0; i < N; i++)
        cin >> card[i];
    
    int result = 0;
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++)
            {
                // 카드 3개 조합
                int sum = card[i] + card[j] + card[k];
                
                // M값과 같은 경우 출력 후 종료
                if (sum == M) {
                    cout << sum << "\n";
                    return 0;
                }
                // M값보다 작고 기존의 result 값보다 큰 경우 갱신
                else if (sum < M && sum > result)
                    result = sum;
            }
        }
    }
    cout << result << "\n";
}
