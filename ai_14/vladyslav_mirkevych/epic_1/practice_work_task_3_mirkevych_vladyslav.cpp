#include <iostream>
using namespace std ;
int main()
{   int v0,t;
    double p;
    cout << "Введіть початкову кількість переглядів:";
    cin >> v0;
    cout << "Введіть процент зростання переглядів:";
    cin>> p;
    cout << "Введіть кількість днів:";
    cin>> t;


    double c = (1+ (double)p/100);
    double g = 1;

    for (int x = 1; x<=t ;x++)
    {
    g*=c;
    }
    cout <<"Прогнозована кількість переглядів:"<< int(g*v0+0.5);
    return 0;

}

