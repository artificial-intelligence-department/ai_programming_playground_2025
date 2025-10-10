#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int V0;
    cout << "Початкова кількість переглядів: ";
    cin >> V0;

    float p, Vt;
    cout << "На скільки відсотків зростає кількість переглядів щодня? ";
    cin >> p;

    int t;
    cout << "Кількість днів: ";
    cin >> t;

    Vt = V0*pow(1 + p/100, t);
    cout << "Зростання: " << Vt << endl;
    int V_int = round (Vt);
    cout << "Прогнозована кількість переглядів: " << V_int; 
    
    return 0;
}