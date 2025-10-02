#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double V0, p; 
    int t;        
    double total_views;

    cout << "Enter the initial number of views: ";
    cin >> V0;
    cout << "Enter the daily growth rate (in %): ";
    cin >> p;
    cout << "Enter the number of days after which you want to know the expected views: ";
    cin >> t;

    total_views = V0 * pow(1 + p/100.0, t);

    cout << "Increase in views: " << total_views - V0 << endl;
    cout << "Predicted views after " << t << " days: " << total_views << endl;

    return 0;
}
