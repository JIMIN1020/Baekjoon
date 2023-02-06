// [14696] 딱지놀이
#include <iostream>
using namespace std;

int main(void) {
    int N, aN, bN;
    cin >> N;
    
    while (N--)
    {
        int a, b, A[5] = {0}, B[5] = {0}, count = 0;
        
        // 입력 받기
        cin >> aN;
        for (int i = 0; i < aN; i++) {
            cin >> a;  // 변수에 입력 받은 후
            A[a]++;    // 그 값을 인덱스로 사용하여 1 증가시킴 (개수 세기)
        }
        cin >> bN;
        for (int i = 0; i < bN; i++) {
            cin >> b;
            B[b]++;
        }
        
        // 개수 비교
        for (int i = 4; i > 0; i--) {
            if (A[i] > B[i]) {
                cout << "A\n";
                break;
            }
            else if (A[i] < B[i]) {
                cout << "B\n";
                break;
            }
            else count++;  // 개수가 똑같을 경우 카운트
        }
        // 4개 모두 개수가 같을 경우 무승부
        if (count == 4) cout << "D\n";
    }
}
