// [2775] 부녀회장이 될테야
#include <iostream>
using namespace std;

int main(void)
{
    int T, k, n;
    cin >> T;
    
    while (T--)
    {
        int apart[15][15] = {0};
        cin >> k >> n;
        
        // 0층
        for (int i = 1; i <= n; i++)
            apart[0][i] = i;
        
        // 1층 ~ k층
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                apart[i][j] = apart[i-1][j] + apart[i][j-1];
            }
        }
        cout << apart[k][n] << "\n";
    }
}
