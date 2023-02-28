// [10798] 세로읽기
#include <iostream>
using namespace std;

int main(void)
{
    string str[5];
    for (int i = 0; i < 5; i++)
        cin >> str[i];
    
    // 세로로 읽어서 출력하기
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++)
        {
            // 다 출력한 문자열은 패스
            if (str[j].size() > i)
                cout << str[j][i];
        }
    }
    cout << "\n";
}
