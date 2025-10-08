#include <iostream>
#include <cmath>
using namespace std;

double V(int a, int b , int c) {
    return a * pow(1 + b/100.0, c);
}

int main() {
    int v0;
    int p;
    int days;
    
    cin >> v0 >> p >> days;
    cout << "Зростання (float): " << V(v0, p, days) << endl;
    cout << "Прогноз переглядів через 10 днів: " << round(V(v0, p, days));

    return 0;
}