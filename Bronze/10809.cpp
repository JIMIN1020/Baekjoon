// [10809] 알파벳 찾기
#include <stdio.h>
#include <cstring>

int main(void) {
    char s[100];
    scanf("%s", s);
    for (int i = 'a'; i < 'z'+1; i++) {
        int check = -1;
        for (int j = 0; j < strlen(s); j++) {
            if (s[j] == i) {
                check = j;
                break;
            }
        }
        printf("%d ", check);
    }
}
