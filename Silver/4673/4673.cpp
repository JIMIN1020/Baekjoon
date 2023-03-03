// [4673] 셀프 넘버
#include <iostream>
using namespace std;

int main(void) {
    int arr[10001] = {0};  // 분해합 저장할 배열
    
    // 1~10000까지 분해합 구하기
    for (int i = 1; i < 10001; i++) {
        int sum = i, num = i;
        while (num) {
            sum += num % 10;  // 한 자리씩 더하기
            num /= 10;
        }
        if (sum <= 10000) arr[sum]++;  // 분해합 개수 저장
    }
    for (int j = 1; j < 10001; j++) {
        if (arr[j] == 0) cout << j << "\n";
    }
}
