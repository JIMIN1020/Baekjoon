// [1316] 그룹 단어 체커
#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    string word;
    int count = N;   // 전체 단어 수 저장
    
    while (N--) {
        cin >> word;
        int alpha[26] = {0,};       // 알파벳 존재 여부 체크할 배열
        alpha[word[0] - 'a'] = 1;   // 첫번째 문자는 우선 1로 갱신
        
        for (int i = 1; i < word.size(); i++)
        {
            // i번째와 i-1번째가 같지 않으면서, i번째 문자가 이전에 이미 나왔을 경우?
            if (word[i] != word[i-1] && alpha[word[i] - 'a'] == 1) {
                count--;  // 전체 단어 수에서 1 빼기
                break;
            }
            // 위에 해당하지 않는 경우 1로 갱신
            alpha[word[i] - 'a'] = 1;
        }
    }
    cout << count << "\n";
}
