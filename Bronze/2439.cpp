// [2439] 별 찍기 - 2
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i < n+1; i++) {
        for (int j = n-i; j > 0; j--) printf(" ");
        for (int k = 1; k < i+1; k++) printf("*");
        printf("\n");
    }
}
