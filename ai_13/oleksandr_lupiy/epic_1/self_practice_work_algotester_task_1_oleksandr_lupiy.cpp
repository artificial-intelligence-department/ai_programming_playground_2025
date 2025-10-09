#include <iostream>

using namespace std;

int main()
{
    int mas[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int money, n = 0;
    cin >> money;
    for(int i = 0; i < 9; i++)
    {
        while(money >= mas[i])
        {
            money -= mas[i];
            n++;
        }
    }
    cout << n;
    return 0;
}
