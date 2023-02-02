// [10093] 숫자
#include <iostream>
using namespace std;

int main(void) {
    long long A, B;
    cin >> A >> B;
    
    if (A == B) cout << "0\n";
    else if (A > B) {
        cout << A - B - 1 << "\n";  // B~A 사이 정수의 개수
        for (long long i = B+1; i < A; i++) cout << i << " ";
        cout << "\n";
    }
    else if (A < B) {
        cout << B - A - 1 << "\n";  // A~B 사이 정수의 개수
        for (long long i = A+1; i < B; i++) cout << i << " ";
        cout << "\n";
    }
}

