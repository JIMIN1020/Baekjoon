// [11720] 숫자의 합
#include <stdio.h>

int main(void) {
    int N, sum = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%1d", &x);
        sum += x;
    }
    printf("%d\n", sum);
}
