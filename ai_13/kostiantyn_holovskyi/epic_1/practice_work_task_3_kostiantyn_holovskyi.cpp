#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double V0, V1;
    float p;
    int t;
    cin >> V0 >> p >> t;
    V1 = V0 * pow(1 + p/100, t);
    cout << "Зростання: " << V1 << endl;
    cout << "Прогноз переглядів через " << t << " днів: " << (int)round(V1);
}