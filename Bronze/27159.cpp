// [27159] 노 땡스!
#include <stdio.h>

int main(void) {
    int N, sum = 0, arr[33] = { 0 };
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    sum += arr[0];  // 첫번째 수는 일단 합하기
    for (int i = 1; i < N; i++) {
        if (arr[i-1] != arr[i]-1) sum += arr[i];  // 이웃한 수가 1차이 나지 않는 경우 합하기
    }
    printf("%d\n", sum);
}
