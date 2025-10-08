#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float viewers;
    float percentage;
    float days;
    cin >> viewers >> percentage >> days;
    int i = 0;
    
    while (i < days) {
        viewers = viewers + (viewers * percentage / 100);
        i++;
    }

    cout << "Зростання: " << fixed << setprecision(2) << viewers << endl;
    cout << "Прогноз переглядів через " << days << " днів: " << (int)round(viewers) << endl;
}    