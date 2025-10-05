#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main () {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int v0,d;
    float increase,p;
    cout << "Введи початкову кількість переглядів: \n";
    cin >> v0;
    cout << "Введи відсоток збільшення переглядів: \n";
    cin >> p;
    cout << "Введи кількість днів: \n";
    cin >> d;

    increase = v0*pow(1+p/100.00,d);
    cout << "Зростання (float): ";
    printf("%.2f\n", increase); 
    cout << "Кількість переглядів через " << d << " днів: ";
    printf("%.0f", increase);
}