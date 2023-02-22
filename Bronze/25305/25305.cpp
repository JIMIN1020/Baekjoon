// [25305] 커트라인
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr, arr+N);
    cout << arr[N-K] << "\n";
}
