#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    int V0, p, t;
    float res;
    float Vt;

    cout << "We have prediction formula of how many views you will get:" << '\n';
    cout << "V(t) = V0 * (1 + p/100)^t";
    cout << "Where V(t) is predicted number of views" << '\n';
    cout << "V0 is number of views at the beginning" << '\n';
    cout << "p is percentage of views" << '\n';
    cout << "t is time in days" << '\n';

   
    cout << '\n' << "Enter the number of views at the beginning: ";
    cin >> V0;
    cout << "Enter the percentage of views: ";
    cin >> p;
    cout << "Enter the time in days: ";
    cin >> t;

    cout << fixed << setprecision(2);
    res = 1 + p/100.0;
    Vt = V0 * pow(res, t);
    cout << '\n' << "Predicted number of views(float): " << Vt << '\n';
    cout << "Predicted number of views: " << round (Vt) << '\n';

    return 0;
}