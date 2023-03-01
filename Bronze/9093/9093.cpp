// [9093] 단어 뒤집기
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    int T;s
    cin >> T;
    cin.ignore();       // 입력 버퍼 비우기 (T 입력 후 남은 '\n' 제거)
    stack <char> word;  // 스택 생성
    
    while (T--)
    {
        string str;
        getline(cin, str);  // 한 줄 읽어오기
        str += ' ';         // 마지막에 공백 추가 (마지막 단어 확인용)
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ')  // 공백이면?
            {
                // 스택에 push 해놓은 단어들 꺼내오기
                while (!word.empty()) {
                    cout << word.top();
                    word.pop();
                }
                cout << ' ';      // 공백 출력 (띄어쓰기)
            }
            else word.push(str[i]);  // 공백 아닐 경우엔 스택에 push
        }
        cout << "\n";
    }
}
