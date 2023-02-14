// [10818] 최소, 최대
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int *arr = new int[n];
	  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
	// 정렬 후 출력
    sort(arr, arr+n);
    cout << arr[0] << " " << arr[n-1];
}
