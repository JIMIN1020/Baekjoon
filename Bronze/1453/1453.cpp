// [1453] 피시방 알바
#include <iostream>
using namespace std;

int main(void)
{
    int N, seat[101] = {0}, cnt = 0, x;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (seat[x] == 0)   // 자리가 있는 경우
            seat[x] = 1;
        else cnt++;         // 자리가 없는 경우
    }
    cout << cnt << "\n";
}
