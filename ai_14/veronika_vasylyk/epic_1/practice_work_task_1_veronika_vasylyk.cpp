#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    double c; 
    cout << "Ім'я працівника: ";
    cin >> a;
    cout << "Кількість відпрацьованих годин: ";
    cin >> b;
    cout << "Ставка за годину: ";
    cin >> c;
    cout << "Працівник " << a << " отримує " << b * c << " грн." << endl;

    return 0;
}