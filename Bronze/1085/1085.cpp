// [1085] 직사각형에서 탈출하기
#include <iostream>
using namespace std;

int main(void)
{
    int x, y, w, h, min;
    cin >> x >> y >> w >> h;
    
    min = (w-x) < x ? (w-x) : x;
    min = min < y ? min : y;
    min = min < (h-y) ? min : (h-y);
    
    cout << min << "\n";
}
