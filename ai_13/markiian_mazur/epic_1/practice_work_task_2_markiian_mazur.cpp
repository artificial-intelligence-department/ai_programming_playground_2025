#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int initial_views;
    float increase;
    int days;

    cout << "введіть початкову кількість переглядів" << endl;
    cin >> initial_views;
    cout << "введіть приріст(у %)" << endl;
    cin >> increase;
    cout << "введіть кількість днів" << endl;
    cin >> days;

    float expected = initial_views*(pow((1+increase/100), days));
    cout << "Зростання: " << expected-initial_views << endl;
    cout << "Прогноз переглядів через " << days << " днів: " << round(expected);

    return 0;
}
