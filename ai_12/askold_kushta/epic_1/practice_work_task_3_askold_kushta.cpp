#include <iostream>
#include <cmath>
using namespace std;

 int main() {
    int starting_views;
    double p;;
    int time;
    cin >> starting_views >> p >> time;
    float view_rise=starting_views*pow(1+p/100, time);
    int view_expectation;
    view_expectation=round(view_rise);
    cout << "Зростання: " << view_rise << endl;
    cout << "Прогноз переглядів через " << time << " днів: " <<view_expectation << endl;
    return 0;
 }