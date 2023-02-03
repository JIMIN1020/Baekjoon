// [1157] 단어 공부
#include <iostream>
using namespace std;

int main(void) {
    string word;
    cin >> word;
    int max = 0, check = 0, index = 0, count[60] = {0};
    
    // 알파벳 수 카운트 하기
    for (int i = 0; i < word.length(); i++)
        count[(word[i] - 'A') % 32] += 1;
    
    // 최댓값 찾기
    for (int j = 0; j < 26; j++) {
        if (count[j] > max) {
            max = count[j];
            index = j;
        }
    }
    
    // 최댓값 중복 찾기
    for (int j = 0; j < 26; j++)
        if (j != index && count[j] == max) check = 1;
    
    // 출력
    if (check == 0) cout << (char)('A' + index) << "\n";
    else cout << "?\n";
}
