// [11720] 숫자의 합
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N, sum = 0;
    string str;
    cin >> N >> str;
    
    for (int i = 0; i < N; i++) {
        sum += str[i] - '0';
    }
    cout << sum << "\n";
}
