// [2920] 음계
#include <iostream>
using namespace std;

int main(void) {
    int arr[8];
    for (int i = 0; i < 8; i++) cin >> arr[i];
    int check = arr[0] - arr[1]; // 1이면 내림차순, -1이면 오름차순
    
    for (int j = 1; j < 7; j++) {
        if (arr[j] - arr[j+1] != check) { // 정렬이 끊기면?
            check = 0;  // mixed로 판단하고 0으로 갱신
            break;
        }
    }
    if (check == 1) cout << "descending\n";
    else if (check == -1) cout << "ascending\n";
    else cout << "mixed\n";
}
