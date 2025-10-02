#include <iostream>
using namespace std ;
int main()
{   int v0,p,t;
    cin >> v0 >> p >> t;
    double c = (1+ (double)p/100);
    double g = 1;

    for (int x = 1; x<=t ;x++)
    {
    g*=c;
    }
    cout << int(g*v0+0.5);
    return 0;
}

