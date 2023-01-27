// [4153] 직각삼각형
#include <stdio.h>

int main(void) {
    while (1) {
        int a, b, c, max = 0;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 || b == 0 || c == 0) break;
        if (a*a == c*c + b*b || b*b == c*c + a*a || c*c == a*a + b*b) printf("right\n");
        else printf("wrong\n");
    }
}
