// [2501] 약수 구하기
#include <iostream>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    
    for (int i = 1; i <= N; i++)
    {
		// 약수 찾을 때마다 K값 감소
        if (N % i == 0) K--;    
        
		// K가 0이 되는 순간 값 출력
        if (K == 0) {           
            cout << i << "\n";
            return 0;
        }
    }
	// 약수가 K개 보다 적을 경우
    if (K != 0)
			cout << "0\n"; 
}
