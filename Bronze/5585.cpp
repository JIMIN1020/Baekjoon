// [5585] 거스름돈
#include <iostream>
using namespace std;

int main(void) {
    int p, count = 0;
    cin >> p;
    p = 1000 - p;
    
    count += p/500 + p%500/100 + p%100/50 + p%50/10 + p%10/5 + p%5;
    cout << count << "\n";
}
