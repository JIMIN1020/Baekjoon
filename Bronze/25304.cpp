#include <stdio.h>

int main(void) {
    int total, count;  // 총 금액, 개수
    scanf("%d %d", &total, &count);
    
    // 각 가격, 개수 받기
    for (int i = 0; i < count; i++) {
        int price, count;
        scanf("%d %d", &price, &count);
        total -= price * count;  // 총 금액에서 빼기
    }
    if (total) printf("No\n");
    else printf("Yes\n");
}
