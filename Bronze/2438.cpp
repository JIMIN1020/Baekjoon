// 2438. 별찍기-1

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for (int i = 1; i < num+1; i++) {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
