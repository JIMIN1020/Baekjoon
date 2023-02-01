// [5622] 다이얼
#include <iostream>
using namespace std;

int main(void) {
    int sum = 0;
    char dial[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    string word;
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        sum += dial[word[i] - 'A'];
    }
    cout << sum << "\n";
}
