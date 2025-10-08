#include <iostream>
#include <cmath>
using namespace std;
int views, days;
double views_prediction, percentage;
int main()
{
cout.setf(ios::fixed);
cout.precision(2);
cout << "Current views: ";
cin >> views;
cout << "How many percent will the number of views increase per day: ";
cin >> percentage;
cout << "How many days will it last: ";
cin >> days;
views_prediction = views * pow(1 + percentage/100, days);
cout << "Growth(float): " << views_prediction << endl;;
cout << "View prediction after " << days << " days: " << round(views_prediction);
}
