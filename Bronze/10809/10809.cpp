// [10809] 알파벳 찾기
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (int i = 'a'; i < 'z'+1; i++)
    {
        int check = -1;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == i) {
                check = j;
                break;
            }
        }
        cout << check << " ";
    }
}
