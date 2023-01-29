// [10162] 전자레인지
#include <stdio.h>

int main(void) {
    int T, A = 0, B = 0, C = 0; // 5m, 1m, 10s
    scanf("%d", &T);
    
    A = (T / 60) / 5;
    B = (T / 60) % 5;
    C = (T % 60) / 10;
    
    if ((T % 60) % 10) printf("-1\n");
    else printf("%d %d %d\n", A, B, C);
}
