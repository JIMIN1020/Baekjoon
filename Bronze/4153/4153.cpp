// [4153] 직각삼각형
#include <iostream>
using namespace std;

int main(void) 
{
		int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        
        if (a == 0 || b == 0 || c == 0)
            break;
        
        if (a*a == c*c + b*b || b*b == c*c + a*a || c*c == a*a + b*b)
						cout << "right\n";
        else
            cout << "wrong\n";
    }
}
