#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int t;
    float stavka;
    cin >> name >> t >> stavka;
    printf("Працівник %s отримав зарплату: %.2f грн", name.c_str(), stavka*t);
    return 0;
}