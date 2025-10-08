#include <iostream>
#include <cmath>  
#include <iomanip>     
using namespace std;

int main () {

    int V,t;
    double p;

    cout << "Enter the initial number of views ";
    cin >> V;
    cout << "Enter daily growth rate (%): ";
    cin >> p;
    cout << "Enter days: ";
    cin >> t;

    double result = V * pow(1 + p/100, t);
    cout << fixed << setprecision(2);
    cout << "Float: " << result << endl;
    cout << "Predicted views after " << t << " days: " << (int)result << endl;
    
    return 0;
}