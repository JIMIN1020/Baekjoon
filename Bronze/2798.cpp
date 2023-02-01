// [2798] 블랙잭
#include <iostream>
using namespace std;

int main(void) {
    int N, M, arr[100];
    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    int result = 0;
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                if (arr[i] + arr[j] + arr[k] <= M && arr[i] + arr[j] + arr[k] > result)
                    result = arr[i] + arr[j] + arr[k];
            }
        }
    }
    cout << result << "\n";
}
