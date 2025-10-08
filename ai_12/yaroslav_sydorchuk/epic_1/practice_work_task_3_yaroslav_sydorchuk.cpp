#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int initialViews;
    int percentIncrease;
    int days;

    cin >> initialViews >> percentIncrease >> days;
    float futureViews = initialViews * pow((1 + percentIncrease / 100.0), days);

    cout << "Зростання (float): " << fixed << setprecision(2) << futureViews << endl;
    cout << "Прогноз переглядів через " << days << " днів: " << fixed << setprecision(0) << futureViews << endl;

    return 0;
}