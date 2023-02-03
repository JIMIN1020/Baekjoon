// [2309] 일곱 난쟁이
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int arr[9], sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+9);
    
    // 일곱 난쟁이 찾기
    for (int i = 0; i < 8; i++) {
        for (int j = i+1; j < 9; j++) {
            if ((sum - arr[i] - arr[j]) == 100) {  // 합에서 난쟁이 2명의 키를 뺀 값이 100이면?
                sum = 0;     // break 용도
                arr[i] = 0;  // 해당하는 난쟁이 키는 0으로 만듦
                arr[j] = 0;
                break;
            }
        }
        if (sum == 0) break;
    }
    
    // 출력
    for (int i = 0; i < 9; i++)
        if (arr[i] > 0) cout << arr[i] << "\n";
}
