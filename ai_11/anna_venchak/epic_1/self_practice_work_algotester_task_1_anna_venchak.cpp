#include <iostream>
using namespace std;

int main()
{
    int sdown, sup, v;
    cin >> sdown >> sup >> v;
    float vdown = v * 2.0;
    float tdown = sdown / vdown;
    float vup = v / 2.0;
    float tup = sup / vup;
    if (tup < tdown)
    {
        cout << "Up";
    }
    else if (tup > tdown)
    {
        cout << "Down";
    }
    else
    {
        cout << "Never mind";
    }
    return 0;
}