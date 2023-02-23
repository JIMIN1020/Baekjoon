// [2920] 음계
#include <iostream>
using namespace std;

int main(void)
{
    int arr[8];
    for (int i = 0; i < 8; i++)
        cin >> arr[i];
    
    // 1이면 내림차순, -1이면 오름차순을 기준으로 판단
    int check = arr[0] - arr[1];
    
    for (int i = 1; i < 7; i++)
    {
        if (arr[i] - arr[j+1] != check) // 정렬이 끊기면?
        {
            cout << "mixed" << "\n"  // mixed로 판단
            return 0;
        }
    }
    
    if (check == 1)
        cout << "descending\n";
    else if (check == -1)
        cout << "ascending\n";
}
