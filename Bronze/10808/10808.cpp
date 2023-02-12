// [10808] 알파벳 개수
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    
    for (int i = 'a'; i < 'z'+1; i++)
    {
        int count = 0;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == i) { count++; }
        }
        cout << count << " ";
    }
    cout << "\n";
}
