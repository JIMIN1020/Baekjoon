#include <stdio.h>

int main(void) {
    int max = 0, index;
    
    for (int i = 0; i < 9; i++) {
        int x;
        scanf("%d", &x);
        if (max < x) {
            max = x;
            index = i+1;
        }
    }
    printf("%d\n%d\n", max, index);
}
