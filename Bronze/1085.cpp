// [1085] 직사각형에서 탈출하기
#include <stdio.h>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int min = 1000;
    min = (w-x) < x ? (w-x) : x;
    min = min < y ? min : y;
    min = min < (h-y) ? min : (h-y);
    printf("%d\n", min);
}
