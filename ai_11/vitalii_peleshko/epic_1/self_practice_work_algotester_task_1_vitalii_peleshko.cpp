#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");
    int n;
    cin >> n;
    string p;
    cin >> p;
    int Ks = 0, Vs = 0;
    int Kp = 0, Vp = 0;
    for (char s : p) {
        if (s == 'V')
        Vp ++;
        else if (s == 'K')
        Kp ++;
        if ( Vp >= 11 && (Vp - Kp) >= 2) {
            Vs++;
            Kp = 0;
            Vp = 0;
        } else if (Kp >= 11 && (Kp - Vp) >= 2) {
            Ks++; 
            Vp = 0;
            Kp = 0;
        }
    }

    cout << Ks << ":" << Vs << endl;

    if (Kp > 0 || Vp > 0) {
        cout << Kp << ":" << Vp << endl;
    }

    return 0;
}