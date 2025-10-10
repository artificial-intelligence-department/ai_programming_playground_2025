#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int number_views;
    float procent;
    int day;
    float result;

    cout << "Initial number of views: ";
    cin >> number_views;
    cout << "\nDaily percentage growth: ";
    cin >> procent;
    cout << "\nNumber of days: ";
    cin >> day;

    result = number_views * pow(1 + (procent / 100), day);

    cout << "Growth (float): " << fixed << setprecision(2) << result << endl;
    cout << "View forecast in " << day << " days: " << round(result);
}