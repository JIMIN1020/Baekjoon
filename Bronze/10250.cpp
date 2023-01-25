// [10250] ACM 호텔
#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);
        
        for (int j = 1; j < W+1; j++) { // 방 개수만큼
            for (int k = 1; k < H+1; k++) { // 층수만큼
                N--;
                if (N == 0) printf("%d\n", (k*100)+j); // 층수 * 100 + 방번호
            }
        }
    }
}
