// [2562] 최댓값
#include <iostream>
using namespace std;

int main(void)
{
    int max = 0, index = 0, x;
    
    for (int i = 0; i < 9; i++)
    {
        cin >> x;
        if (max < x) {
            max = x;
            index = i+1;
        }
    }
    cout << max << " " << index << "\n";
}
