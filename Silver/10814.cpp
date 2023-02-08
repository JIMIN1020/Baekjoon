// [10814] 나이순 정렬
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
    int age;
    string name;
};

bool compare(const Person& x, const Person& y)
{
    return x.age < y.age;
}

int main(void) {
    int N;
    cin >> N;
    Person *p = new Person[N];
    
    for (int i = 0; i < N; i++) {
        cin >> p[i].age >> p[i].name;
    }
    
    stable_sort(p, p+N, compare);
    
    for (int i = 0; i < N; i++) {
        cout << p[i].age << " " << p[i].name << "\n";
    }
}
