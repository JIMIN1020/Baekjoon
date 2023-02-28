// [1924] 2007년
#include <iostream>
using namespace std;

int main(void)
{
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int last_day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int x, y, sum = 0;
    cin >> x >> y;
    
    // 1~(x-1)월의 모든 일 수 합하기
    for (int i = 1; i < x; i++) {
        sum += last_day[i];
    }
    
    // x월의 y일 합하기
    sum += y;
    
    // 일주일(7)로 나눈 나머지를 인덱스로 사용
    cout << day[sum%7] << "\n";
}
