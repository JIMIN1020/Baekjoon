// [2455] 지능형 기차
#include <iostream>
using namespace std;

int main(void) {
    int max = 0, num = 0;
    
    for (int i = 0; i < 4; i++) {
        int in, out;
        cin >> out >> in;
        num -= out;
        num += in;
        if (max < num) max = num;
    }
    cout << max << "\n";
}
