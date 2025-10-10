#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float Vt, p;
    int Vo, t;
    cin >> Vo >> p >> t;
    p = p/100;
    Vt = Vo * pow(1 + p, t);
    cout << fixed << setprecision(2);
    cout << "Зростання (float):" << Vt << endl;
    cout << "Прогноз переглядів через " << t << " днів:" <<  round(Vt);

    return 0;
}