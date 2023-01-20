// [2480] 주사위 세개

#include <iostream>
using namespace std;

int main(void) {
    
    int a, b, c;  // 주사위 세개
    cin >> a >> b >> c;
    
    // 모두 같을 경우
    if (a == b && b == c) cout << 10000+a*1000 << endl;
    
    // 2개가 같을 경우
    else if (a == b || b == c || a == c)
    {
        if (a == b || a == c) cout << 1000+a*100 << endl;
        else cout << 1000+b*100 << endl;
    }
    
    // 모두 다를 경우
    else
    {
        int d = a > b ? a : b;
        int e = d > c ? d : c;
        cout << e*100 << endl;
    }
}
