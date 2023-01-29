// [3009] 네번째 점
#include <stdio.h>

int main(void) {
    int x1, x2, x3, y1, y2, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("%d %d\n", x1^x2^x3, y1^y2^y3);
}
