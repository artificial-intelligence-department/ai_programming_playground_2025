#include <iostream>
#include <cmath>

using namespace std;

 int main() {

    int starting_views;
    double p;;
    int time;
    int view_expectation;

    cin >> starting_views >> p >> time;

    if(starting_views<0 || !(0<=p<=100) || time<0){
      cout << "Неправильні введені дані" << endl;
      return 1;
    }

    float view_rise=starting_views*pow(1+p/100, time);
    view_expectation=round(view_rise);

    cout << "Зростання: " << view_rise << endl;
    cout << "Прогноз переглядів через " << time << " днів: " <<view_expectation << endl;

    return 0;
 }