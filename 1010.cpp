// [1010] 다리 놓기
#include <iostream>
using namespace std;

int combi(int n, int r)
{
    int result = 1;
    int k = 1;
    
    // n ~ n-r+1까지 곱하기 & 1 ~ r까지 값으로 나누기
    for (int i = n; i > n-r; i--, k++)
    {
        // 범위 초과를 감안하여 곱한 후 나누기 반복
        result *= i;
        result /= k;
    }
    return result;
}

int main(void)
{
    int T, n, r;
    cin >> T;
    
    while (T--)
    {
        cin >> r >> n;
        cout << combi(n, r) << "\n";
    }
}
