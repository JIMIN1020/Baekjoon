// [3052] 나머지
#include <stdio.h>

int main(void) {
    int arr[42] = {0}, n, count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (arr[n%42] == 0) {
            arr[n%42] = 1;
            count++;
        }
    }
    printf("%d\n", count);
}
