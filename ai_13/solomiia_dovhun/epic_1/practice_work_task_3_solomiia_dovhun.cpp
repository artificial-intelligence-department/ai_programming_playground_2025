#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
int V0, t;
float p;
cout << "Views: ";
cin >> V0;
cout << "Daily growth(%): ";
cin >> p;
cout << "Days: ";
cin >> t;
float V = V0 * pow(1 + p/100.0, t);
cout << "Growth(float): " << fixed << setprecision(2) << V << endl;
cout << "Predicted views in " << t << " days: " << round (V) << endl;

return 0;
}