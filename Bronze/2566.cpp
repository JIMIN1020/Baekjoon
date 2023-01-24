// [2566] 최댓값
#include <stdio.h>

int main(void) {
    int max = 0, row = 0, col = 0;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int temp;
            scanf("%d", &temp);
            if (max <= temp) {
                max = temp;
                row = i+1;
                col = j+1;
            }
        }
    }
    printf("%d\n%d %d", max, row, col);
}
