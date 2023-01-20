// [2525] 오븐시계

#include <iostream>
using namespace std;

int main(void) {
    
    int hour, min, need_t;  // 시작 시간, 필요 시간
    cin >> hour >> min >> need_t;
    
    hour = (hour + (min + need_t) / 60) % 24;
    min = (min + need_t) % 60;

    cout << hour << " " << min << endl;
}
