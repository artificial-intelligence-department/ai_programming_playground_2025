#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    c += n / 500;
    n %= 500;
    c += n / 200;
    n %= 200;
    c += n / 100;
    n %= 100;
    c += n / 50;
    n %= 50;
    c += n / 20;
    n %= 20;
    c += n / 10;
    n %= 10;
    c += n / 5;
    n %= 5;
    c += n / 2;
    n %= 2;
    c += n / 1;
    n %= 1;

    cout << c;
    return 0;
}