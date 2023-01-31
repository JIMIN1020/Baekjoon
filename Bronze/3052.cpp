// [3052] 나머지
#include <iostream>
using namespace std;

int main(void) {
    int arr[42] = {0}, n, count = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (arr[n%42] == 0) {
            arr[n%42] = 1;
            count++;
        }
    }
    cout << count << "\n";
}
