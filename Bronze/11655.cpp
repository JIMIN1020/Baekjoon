// [11655] ROT13
#include <iostream>
using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i] + 13 > 90) str[i] -= 13;
            else str[i] += 13;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] + 13 > 122) str[i] -= 13;
            else str[i] += 13;
        }
    }
    cout << str << "\n";
}
