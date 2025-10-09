#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double r, h;
    cin >> r >> h;

    double V_sph = (4.0/3.0) * M_PI * pow(r, 3);
    double V_cyl = M_PI * pow(r, 2) * (h - 2*r);
    double V = V_cyl + V_sph;
        
    double S_sph = 4 * M_PI * pow(r, 2);
    double S_cyl = 2 * M_PI * (h - 2 * r) * r;
    double S = S_cyl + S_sph;
    cout << fixed << setprecision(7) << V << " " << S;

    return 0;
}