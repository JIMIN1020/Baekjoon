// [3003] 킹, 퀸, 룩, 비숍, 나이트, 폰
// 체스는 총 16개의 피스 (킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개)

#include <iostream>
#define SIZE 6
using namespace std;

int main(void) {
    
    int piece[SIZE] = {1, 1, 2, 2, 2, 8};
    int n;
    
    for (int i = 0; i < SIZE; i++)
    {
        cin >> n;
        piece[i] -= n;
        cout << piece[i] << " ";
    }
}
 
