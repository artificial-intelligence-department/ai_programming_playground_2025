#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int V0 = 0, t = 0;
    float p = 0, Vt = 0;
    
    cout << "Enter V0, p, t: ";
    cin >> V0 >> p >> t;
    Vt = V0 * pow(1 + p/100, t);
    cout << "Growth(float): " << Vt << endl;
    cout << "View forecast in 10 days: " << ceil(Vt);
    return 0;
}