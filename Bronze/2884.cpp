// [2884] 알람시계

#include <iostream>
using namespace std;

int main(void) {

    int h, m;
    cin >> h >> m;
    
    if (m >= 45) m -= 45;
    else
    {
        if (h == 0) h = 23;
        else h--;
        m += 15;
    }
    cout << h << " " << m << endl;
}
