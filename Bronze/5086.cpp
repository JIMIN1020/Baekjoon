// [5086] 배수와 약수
#include <stdio.h>

int main(void) {
    while (1) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (!(a && b)) return 0;
        
        if (a % b == 0) printf("multiple\n"); // 배수라면?
        else if (b % a == 0) printf("factor\n"); // 약수라면?
        else printf("neither\n");
    }
}
