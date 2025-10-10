#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    double x, y, d;
    cin >> x >> y >> d;
    double r = d/2.0;
    double res = r*r*2;
    
    cout << fixed << setprecision(7) << res;

    return 0;
}