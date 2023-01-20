// [2525] 오븐시계
#include <stdio.h>

int main(void) {
    
    int hour, min, need_t;
    
    scanf("%d %d %d", &hour, &min, &need_t);
    
    hour = (hour + (min + need_t) / 60) % 24;
    min = (min + need_t) % 60;
    
    printf("%d %d\n", hour, min);
}
