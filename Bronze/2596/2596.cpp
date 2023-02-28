// [2596] 비밀편지
#include <iostream>
using namespace std;

int main(void) {
    char num[8][7] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
    int N;
    cin >> N;
    string str, result("");
    cin >> str;
    
    int n = N;
    while (n--)
    {
        int check = 0;  // 일치하는 문자가 없을 경우 체크
        for (int i = 0; i < 8; i++)
        {
            int count = 0;  // 각 자리마다 일치하지 않는 경우 카운트
            
            // 한 자리씩 비교하기
            for (int j = 0; j < 6; j++) {
                if (str[j] != num[i][j]) count++;
            }
            // 일치하지 않는 자리가 1개 이거나 전부 일치할 때?
            if (count == 0 || count == 1) {
                result += i+65;  // 결과값에 저장
                check = 1;       // 일치하는 문자 찾음 표시
                break;
            }
        }
        // 일치하는 문자가 없을 경우?
        if (check == 0) {
            cout << N - n << "\n";  // 현재 위치 출력
            return 0;
        }
        else str.erase(0, 6);  // str[0]부터 6개 문자 지움 (검사 끝난 문자)
    }
    cout << result << "\n";
}
