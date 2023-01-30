// [11721] 열 개씩 끊어 출력하기
#include <stdio.h>
#include <cstring>

int main(void) {
    char str[100];
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str)/10+1; i++) {
        for (int j = i*10; j < i*10+10; j++) {
            if (str[j] == 0) break;
            printf("%c", str[j]);
        }
        printf("\n");
    }
}
