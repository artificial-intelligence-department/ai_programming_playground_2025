#include <iostream>
#include <cmath>
using namespace std;
int main() {
 int V_0 ; //initial number of views
 double p; // daily increment
 int t; // Number of days
 double V; // Anticipated amount of views

 cout << "Enter initial number of views: \n";
 cin >> V_0;

 cout << "Enter a daily increment (in %): \n";
 cin >> p;

 cout << "Enter a number of days: \n";
 cin >> t
 ;
 V = V_0 * pow(1 + p/100, t);

 cout << "Increment: " << V;
 cout << "\nAnticipated amount of views in " << t << " days: " << round(V);
 return 0;
}