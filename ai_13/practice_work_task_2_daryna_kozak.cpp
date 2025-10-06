#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int views;
  cout << "Введіть початкову кількість переглядів:\n";
  cin >> views;

  int days;
  cout << "Введіть кількість днів:\n";
  cin >> days;


  float percent;
  cout << "Введіть приріст у відсотках:\n";
  cin >> percent;

  double expectedViews = views * pow(1 + percent / 100.0, days);
  cout << "Очікувана кількість переглядів через " << days << " днів: " << expectedViews << endl;

  float grow = expectedViews - views;
  cout << "Зростання: " << grow << endl;

  return 0;
}