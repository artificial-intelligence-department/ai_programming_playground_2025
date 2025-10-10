#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int V0;
    double p;
    int t;
    cout << "Введіть кількість початкових переглядів, відсоток зростання(%), кількість днів: "<<endl;
    cin >> V0 >> p >> t;
    
    cout<<fixed<<setprecision(2);
    cout<<"Зростання(float): "<<V0 * pow((1 + p / 100), t)<<endl;

    cout<<fixed<<setprecision(0);
    cout<<"Прогноз переглядів через "<<t<<" днів: "<<(round)(V0 * pow((1 + p / 100), t))<<endl;

    return 0;
}