#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int views;
  cout << "Enter the initial number of views:\n";
  cin >> views;

  int days;
  cout << "Enter the number of days:\n";
  cin >> days;


  float percent;
  cout << "Enter the growth rate in percent:\n";
  cin >> percent;

  double expectedViews = views * pow(1 + percent / 100.0, days);
  cout << "Expected number of views after " << days << " days: " << expectedViews << endl;

  float grow = expectedViews - views;
  cout << "Growth: " << grow << endl;

  return 0;
}