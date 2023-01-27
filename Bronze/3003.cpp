// [3003] 킹, 퀸, 룩, 비숍, 나이트, 폰
// 체스는 총 16개의 피스 (킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개)

#include <stdio.h>
#define SIZE 6

int main(void) {
    int piece[SIZE] = {1, 1, 2, 2, 2, 8};  // 각 피스별 개수
    int n;  // 사용자 입력 값을 저장할 변수
    
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &n);
        piece[i] -= n;
        printf("%d ", piece[i]);
    }
}
