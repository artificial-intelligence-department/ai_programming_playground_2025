#include <iostream>
#include <cmath>

using namespace std;
int main() {

  int views;
  cout << "Starting number of views:\n";
  cin >> views;

  float percent;
  cout << "Growth rate in percent:\n";
  cin >> percent;

  int days;
  cout << "Number of days:\n";
  cin >> days;

  double predicted_views = views * pow(1 + percent / 100.0, days);
  cout  << "Predicted views in " << days <<  " days = " << predicted_views << endl;

  float grow = predicted_views - views;
  cout << "Growth = " << grow << endl;

  return 0;
}