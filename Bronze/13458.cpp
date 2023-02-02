// [13458] 시험 감독
#include <iostream>
using namespace std;

int main(void) {
    int N, B, C;
    long long cnt = 0;
    cin >> N;
    
    int *A = new int[N];  // 시험장 별 학생 수를 담을 배열 생성
    for (int i = 0; i < N; i++) cin >> A[i];
    cin >> B >> C;
    
    for (int j = 0; j < N; j++) {
        A[j] -= B;                  // 총감독관이 감독할 수 있는 수 빼기
        cnt++;                      // 총감독관 1명 추가
        if (A[j] <= 0) continue;    // 총감독관 1명만 있어도 되는 경우 넘어감
        cnt += A[j] / C;            // 부감독관이 감독할 수 있는 수로 나눈 몫 = 부감독관 수
        if (A[j] % C != 0) cnt++;   // 나누고 남은 경우 부감독관 1명 추가
    }
    cout << cnt << "\n";
}
