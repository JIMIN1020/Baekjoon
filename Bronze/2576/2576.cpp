// [2576] 홀수
#include <iostream>
using namespace std;

int main(void)
{
    int n, min = 100, sum = 0;
    
    for (int i = 0; i < 7; i++)
    {
        cin >> n;
        // 홀수 일 경우 합한 후 최솟값 비교
        if (n % 2 != 0) {
            sum += n;
            if (n < min) min = n;
        }
    }
    
    if (sum == 0)
        cout << "-1\n";
    else
        cout << sum << "\n" << min << "\n";
}
