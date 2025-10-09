#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int V0, t;
    float p;
    cout << "Enter your views: "; cin >> V0;
    cout << "Enter daily growth (in %): "; cin >> p;
    cout << "Enter number of days: "; cin >> t;
    cout << "Forecast after " << t << " days: " << round(V0 * pow((1 + p / 100), t)) << endl;
    return 0;
}