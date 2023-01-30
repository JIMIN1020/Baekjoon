// [2576] 홀수
#include <stdio.h>

int main(void) {
    int n, min = 100, sum = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%d", &n);
        if (n % 2 != 0) {
            sum += n;
            if (n < min) min = n;
        }
    }
    if (sum == 0) printf("-1\n");
    else printf("%d\n%d", sum, min);
}
