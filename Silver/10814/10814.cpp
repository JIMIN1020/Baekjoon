// [10814] 나이순 정렬
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main(void)
{
    int N;
    cin >> N;
    vector <pair<int, string>> person;  // 입력값 받을 벡터
    
    // 입력 받기
    int age;
    string name;
    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        person.push_back(pair<int, string>(age, name));
    }
    
    // 정렬
    stable_sort(person.begin(), person.end(), compare);
    
    // 출력
    for (int i = 0; i < N; i++)
        cout << person[i].first << " " << person[i].second << "\n";
}
