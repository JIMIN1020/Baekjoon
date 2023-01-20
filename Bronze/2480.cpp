// [2480] 주사위 세개
#include <stdio.h>

int main(void) {
    
    int a, b, c;  // 주사위 세개
    scanf("%d %d %d", &a, &b, &c);
    
    // 모두 같을 경우
    if (a == b && b == c) printf("%d\n", 10000+a*1000);
    
    // 2개가 같을 경우
    else if (a == b || b == c || a == c) {
        if (a == b || a == c) printf("%d\n", 1000+a*100);
        else printf("%d\n", 1000+b*100);
    }
    
    // 모두 다를 경우
    else {
        int d = a > b ? a : b;
        int e = d > c ? d : c;
        printf("%d\n", e*100);
    }
}
