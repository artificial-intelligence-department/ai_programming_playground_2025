#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double Vo, p, V;
    int t;
    cout << "Pochatkova kilkist perehliadiv: ";
    cin >> Vo;

    cout << "Zrostannia perehliadiv (%): ";
    cin >> p;

    cout << "Kilkist dniv: ";
    cin >> t;
    
    V=Vo*pow((1+p/100),t);
    cout << "Zrostannia (float): " << fixed << setprecision(2) << V << endl;
    cout << "Prohnoz perehliadiv cherez " << t << " dniv: " << int(V) << endl;

    return 0;
}