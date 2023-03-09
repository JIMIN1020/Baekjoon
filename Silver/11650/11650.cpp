// [11650] 좌표 정렬하기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int N, x, y;
    cin >> N;
    vector <pair<int, int>> v;  // vector 생성
    
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }
    
    sort(v.begin(), v.end());  // 정렬하기
    
    for (int i = 0; i < N; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}
