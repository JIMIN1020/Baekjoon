// [2438] 별찍기-1
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    for (int i = 1; i < num+1; i++) {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
