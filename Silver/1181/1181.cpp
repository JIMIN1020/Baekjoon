// [1181] 단어 정렬
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(string s1, string s2)
{
    // 길이가 같으면 사전순으로 비교
    if (s1.size() == s2.size())
        return s1 < s2;
    // 길이가 다르면 길이순으로 비교
    else
        return s1.size() < s2.size();
}

int main(void)
{
    int N;
    cin >> N;
    vector <string> str;
    
    string x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        str.push_back(x);
    }
    
    sort(str.begin(), str.end(), comp);
    
    // 출력 (같은 단어는 무시)
    cout << str[0] << "\n";
    for (int i = 1; i < N; i++) {
        if (str[i-1] != str[i])
            cout << str[i] << "\n";
    }
}
