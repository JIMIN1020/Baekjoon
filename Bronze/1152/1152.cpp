// [1152] 단어의 개수
#include <iostream>
using namespace std;

int main(void) {
    string str;
    getline(cin, str);
    
    int count = 1;
    for (int i = 0; i < str.length(); i++)
        if (str[i] == ' ') count++;
    
    // 첫 문자가 공백일 때
    if (str[0] == ' ') count--;
    
    // 마지막 문자가 공백일 때
    if (str[str.length()-1] == ' ') count--;
    
    cout << count << "\n";
}
