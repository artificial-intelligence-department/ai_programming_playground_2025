#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    int t;
    float p;
    float V0;

cout << "Введіть початкову к-ть переглядів, зростання у % та к-ть днів: ";
cin >> V0 >> p >> t;

cout << fixed << setprecision(2);
float V = V0 * pow((1 + p / 100), t);
int predicted_views = ceil(V);

cout << "Зростання: " << V << endl;
cout << "Прогноз переглядів через " << t << " днів: " << predicted_views << endl;

    return 0;
}
