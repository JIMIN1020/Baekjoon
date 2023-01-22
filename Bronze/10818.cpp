#include <stdio.h>

int main(void) {
    int n, max, min;
    scanf("%d %d", &n, &max);
    min = max; // 처음 입력된 값으로 max, min 초기화
    
    for (int i = 1; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (max < x) max = x;
        if (min > x) min = x;
    }
    printf("%d %d\n", min, max);
}
