#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int V, t;
    float up ,p; 
    cout << " Введіть початкову кількість переглядів: " <<endl;
    cin >> V;

    cout << " Введіть процент зростання: " <<endl;
    cin >> p;

    cout << " Введіть кількість днів: " <<endl;
    cin >> t;

    up = (V * (pow((1+p/100), t)));
    cout << "Зростання (float): " << up <<endl;
    cout << "Очікуванна кількість переглядів: " << round(up*1)/1 <<endl;
    return 0;
}