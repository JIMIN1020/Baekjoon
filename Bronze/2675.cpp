// [2675] 문자열 반복
#include <iostream>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        string str;
        cin >> n >> str;
        
        for (int i = 0; i < str.length(); i++) {
            for (int j = 0; j < n; j++)
                cout << str[i];
        }
        cout << "\n";
    }
}
