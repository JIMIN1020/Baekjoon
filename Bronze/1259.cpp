// [1259] 팰린드롬수
#include <iostream>
using namespace std;

int main(void) {
    while (1) {
        string N, check = "yes";  // 초기값 : yes
        cin >> N;
        if (N == "0") return 0;
        
        for (int i = 0; i < N.length() / 2; i++) {
            // i번째 수 vs (마지막-i)번째 수 비교
            if (N[i] != N[N.length()-1-i]) {
                check = "no";  // 다를 경우 no로 갱신
                break;
            }
        }
        cout << check << "\n";
    }
}
