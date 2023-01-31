// [2750] 수 정렬하기
#include <iostream>
using namespace std;

int main(void) {
    int N, arr[1000];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    for (int j = 0; j < N; j++) {
        int temp;
        for (int k = 0; k < N-1; k++) {
            if (arr[k] > arr[k+1]) {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                }
            }
    }
    for (int i = 0; i < N; i++) cout << arr[i] << "\n";
}
