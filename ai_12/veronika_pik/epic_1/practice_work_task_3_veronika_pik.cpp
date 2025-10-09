#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main ()
{
    int views, days;
    double procents, increase;

    cout << "Please enter the number of views ";
    cin >> views;

    cout << "Please enter how many percentages of views increase ";
    cin >> procents;

    cout << "Please enter the number of days ";
    cin >> days;

    increase = views * pow(1 + procents/100, days);
    cout << "Increasing " << fixed << setprecision(2) << increase << endl;
    cout << "View forecast in " << days << " days: " << round(increase) << endl;
    
    return 0;
}