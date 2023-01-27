// [10817] 세 수
#include <stdio.h>

int main(void) {
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    
    // 정렬
    for (int i = 0; i < 2; i++) {
        for (int j = i+1; j < 3; j++) {
            int temp;
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d\n", arr[1]);
}
