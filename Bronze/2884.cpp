// [2884] 알람시계
#include <stdio.h>

int main(void) {
    int h, m;
    scanf("%d %d", &h, &m);
    
    if (m >= 45) m -= 45;
    else
    {
        if (h == 0) h = 23;
        else h--;
        m += 15;
    }
    printf("%d %d\n", h, m);
}
