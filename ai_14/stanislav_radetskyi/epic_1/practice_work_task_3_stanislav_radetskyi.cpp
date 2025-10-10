#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

    int main(){
        float Vo;
        float p;
        int t;

        cin >> Vo >> p >> t;
        float Vt = Vo * pow(1.0 + p/100.0, t);
        cout << fixed << setprecision(2);
        cout << "Increase (float) " << Vt << endl;
        cout << "Predicted view after " << t << " days " << (int)round(Vt) << endl;

        

        return 0;
    }
