// [2530] 인공지능 시계
#include <iostream>
using namespace std;

int main(void) {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    C += D;
    B += C / 60;
    C %= 60;
    A += B / 60;
    B %= 60;
    A %= 24;
    
    cout << A << " " << B << " " << C << "\n";
}