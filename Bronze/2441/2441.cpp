// [2441] 별 찍기 - 4
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int k = n-i; k > 0 ; k--)
            cout << "*";
        
        cout << "\n";
    }
}
