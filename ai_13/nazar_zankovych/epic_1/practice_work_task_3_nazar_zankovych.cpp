#include <iostream>
#include <cmath>
#include <locale.h>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(65001); // UTF-8
    SetConsoleCP(65001);

    int v0, t;
    float v, p;

    cin >> v0 >> p >> t;
    p/=100.0;

    v=v0*pow(1+p, t);

    cout << "Зростання: ";
    printf("%.2lf", v);
    cout << "\nПрогноз перегядів через " << t << " " << "днів: " << (int)round(v) << endl;
}