#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "uk_UA.UTF-8");
    setlocale(LC_ALL, "uk_UA");

    int t;
    float V0, p, V;

    cin >> V0 >> p >> t;

    V = V0 * pow(1 + p/100.0, t);

    cout << "Зростання: ";
    printf("%.2f", V);
    cout << "\nПрогноз переглядів через " << t << " " << "днів: " << (int)(V+0.5);
}