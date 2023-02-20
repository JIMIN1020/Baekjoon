// [8958] OX 퀴즈
#include <iostream>
using namespace std;

int main(void) 
{
    int N;
    cin >> N;
    
    while (N--) 
		{
        int sum = 0, ac = 0;
        string str;
        cin >> str;

        for (int i = 0; i < str.length(); i++) 
				{
            if (str[i] == 'O') {
                ac += 1;  // 누적합
                sum += ac;
            }
            else ac = 0;
        }
        cout << sum << "\n";
    }
}
