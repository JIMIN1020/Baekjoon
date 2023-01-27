// [2501] 약수 구하기
#include <stdio.h>

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);
    
    for (int i = 1; i < N+1; i++) {
        if (N % i == 0) K--;    // 약수 찾을 때마다 K값 감소
        if (K == 0) {           // K가 0이 되는 순간 값 출력
            printf("%d\n", i);
            return 0;
        }
    }
    if (K != 0) printf("0\n"); // 약수가 K개 보다 적을 경우
}
