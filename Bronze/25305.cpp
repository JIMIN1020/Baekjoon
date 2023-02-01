// [25305] 커트라인
#include <iostream>
using namespace std;

int main(void) {
    int N, K, arr[1000];
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    for (int i = 0; i < N; i++) {
        int temp;
        for (int j = 0; j < N-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                }
            }
    }
    cout << arr[K-1] << "\n";
}
