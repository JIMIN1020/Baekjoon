// [2441] 별 찍기 - 4
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) printf(" ");
        for (int k = n-i; k > 0 ; k--) printf("*");
        printf("\n");
    }
}