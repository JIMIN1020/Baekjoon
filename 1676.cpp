// [1676] 팩토리얼 0의 개수
#include <iostream>
using namespace std;

int main(void)
{
    int N, count = 0;
    cin >> N;
    
    while (N != 0)
    {
        // 5 개수 세기
        count += N / 5;
        N /= 5;
    }
    cout << count << "\n";
}
