// [10815] 숫자 카드
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector <int> card(N);  // 상근이가 가지고 있는 카드
    
    for (int i = 0; i < N; i++)
        cin >> card[i];
    
    sort(card.begin(), card.end());  // 정렬하기
    
    int M;
    cin >> M;
    vector <int> num(M);   // 탐색할 숫자
    
    for (int i = 0; i < M; i++)
        cin >> num[i];
    
    // 이진 탐색
    for (int i = 0; i < M; i++)
        cout << binary_search(card.begin(), card.end(), num[i]) << " ";
    cout << "\n";
}
