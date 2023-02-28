// [1037] 약수
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, arr[51];
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);
    cout << arr[0] * arr[n-1] << "\n";
}
