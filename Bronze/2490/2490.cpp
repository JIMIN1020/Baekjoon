// [2490] 윷놀이
#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c, d;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        cin >> a >> b >> c >> d;
        sum += a + b + c + d;
        
        if (sum == 4) cout << "E\n";
        else if (sum == 3) cout << "A\n";
        else if (sum == 2) cout << "B\n";
        else if (sum == 1) cout << "C\n";
        else cout << "D\n";
    }
}
