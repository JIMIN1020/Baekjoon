// [2720] 세탁소 사장 동혁
#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int C;
        scanf("%d", &C);
        printf("%d %d %d %d\n", C/25, (C%25)/10, ((C%25)%10)/5, C%5);
    }
}
