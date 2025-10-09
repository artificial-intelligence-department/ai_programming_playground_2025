#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int V0, p, t;
    cout << "V0=";
    cin >> V0;
    cout << "p=";
    cin >> p;
    cout << "t=";
    cin >> t;   
    float x = (1+((float)p/100));
    float Vt = V0*pow(x, t);
    cout << "Зростання = " << Vt << endl;
    cout << "Прогноз переглядів через "<< t <<" днів = " << Vt;
    return 0;
}