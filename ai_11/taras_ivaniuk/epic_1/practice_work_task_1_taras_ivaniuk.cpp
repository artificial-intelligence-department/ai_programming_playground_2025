#include <iostream>
#include <cmath>

using namespace std;
int main(){
    
    double A, P, r, n, t;
    cout << "Enter the time of investment in years" << endl;
    cin >> t;
    cout << "Enter the annual interest rate (in decimal form, e.g. 5% = 0.05)" << endl;
    cin >> r;
    cout << "Enter the number of compounding periods per year" << endl;
    cin >> n;
    cout << "Enter the principal amount of investment" << endl;
    cin >> P;
    A = P * pow((1 + (r / n)), n * t);
    cout << "Initial investment: " << P << endl;
    cout << "Future value of the investment (with interest): " << A << endl;
    cout << "Total earnings: " << A - P << endl;
    return 0;
}
