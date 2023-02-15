// [5086] 배수와 약수
#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    while (1)
    {
        cin >> a >> b;
        if (!(a && b))
            return 0;
        
        // 배수라면?
        if (a % b == 0)
            cout << "multiple\n";
        
        // 약수라면?
        else if (b % a == 0)
            cout << "factor\n";
        
        else
            cout << "neither\n";
    }
}
