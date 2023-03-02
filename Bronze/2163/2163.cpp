// [2163] 초콜릿 자르기
#include <iostream>
using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    
    cout << (N-1) + (M-1)*N << "\n";  // N * M - 1 과 같은 표현
}
