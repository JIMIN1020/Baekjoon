// [11721] 열 개씩 끊어 출력하기
#include <iostream>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    // 10개씩 출력
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];

        // 10개 출력 후 줄바꿈
        if (i % 10 == 9)
            cout << "\n";
    }
}
