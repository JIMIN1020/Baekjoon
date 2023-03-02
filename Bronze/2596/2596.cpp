// [2596] 비밀편지
#include <iostream>
using namespace std;

int main(void)
{
    string num[8] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
    
    int N;
    cin >> N;
    
    string str, result("");
    cin >> str;
    
    // N개의 문자 검사
    for (int i = 0; i < N; i++)
    {
        int check = 0;  // 일치하는 문자가 없을 경우 체크

        // 8개 문자와 비교하기
        for (int j = 0; j < 8; j++)
        {
            int count = 0;  // 각 자리가 일치하지 않는 경우 카운트
            
            // 각 자리마다 비교하기
            for (int k = 0; k < 6; k++) {
                if (str[k] != num[j][k]) {
                    count++;
                    if (count > 1) break;
                }
            }
            
            // 일치하지 않는 자리가 1개 이거나 전부 일치할 때?
            if (count == 0 || count == 1) {
                result += j+65;  // 결과값에 저장
                check = 1;       // 일치하는 문자 찾음 표시
                break;
            }
        }
        // 일치하는 문자가 없을 경우?
        if (check == 0) {
            cout << i+1 << "\n";  // 현재 위치 출력
            return 0;
        }
        else str.erase(0, 6); // str[0]부터 6개 문자 지움 (검사 끝난 문자)
    }
    cout << result << "\n";
}
