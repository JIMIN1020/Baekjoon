// [1181] 단어 정렬
#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    string *str = new string[N];
    for (int i = 0; i < N; i++) cin >> str[i];
    
    // 길이 순으로 정렬
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (str[i].size() > str[j].size()) {
                swap(str[i], str[j]);
            }
        }
    }
    
    // 길이가 같은 경우 사전 순으로 정렬
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; str[j].size() == str[i].size(); j++) {
            if (str[i].compare(str[j]) > 0)
                swap(str[i], str[j]);
        }
    }
    
    // 출력 (같은 단어는 무시)
    for (int i = 0; i < N; i++) {
        if (i != 0 && str[i-1] == str[i]) continue;
        cout << str[i] << "\n";
    }
    delete []str;
}
