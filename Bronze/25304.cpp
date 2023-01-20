// [25304] 영수증
#include <stdio.h>

int main(void) {
    int X, N;  // 총 금액, 개수
    scanf("%d %d", &X, &N);
	   
		// 각 가격, 개수 받기
    for (int i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        X -= a * b;  // 총 금액에서 빼기
    }
    if (X) printf("No\n");
    else printf("Yes\n");
}
