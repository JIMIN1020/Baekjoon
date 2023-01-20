// [2588] 곱셈

#include <iostream>
using namespace std;

int main(void) {
    
    int a, b;
    cin >> a >> b;
    
    cout << a * (b % 100 % 10) << endl;
    cout << a * (b % 100 / 10) << endl;
    cout << a * (b / 100) << endl;
    cout << a * b << endl;
}
