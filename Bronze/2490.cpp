// [2490] 윷놀이
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum += a + b + c + d;
        if (sum == 4) printf("E\n");
        else if (sum == 3) printf("A\n");
        else if (sum == 2) printf("B\n");
        else if (sum == 1) printf("C\n");
        else printf("D\n");
    }
}
