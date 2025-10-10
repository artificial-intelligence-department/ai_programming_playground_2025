#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v0;
    float p;
    int t;

    cout << "Enter the initial number of views: ";
    cin >> v0;
    cout << "Enter the percent of growth: ";
    cin >> p;
    cout << "Enter the number of days: ";
    cin >> t;

    p = p/100;
    float v = v0 * pow(1 + p, t);
    int v_int = round(v);

    cout << "Growth (float): " << v << endl;
    cout << "View forecast in " << t << " days: " << v_int << endl;

    return 0;
}