#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int v=0, t, p;
    cout << "Введіть кількість переглядів: ";
    cin >> v;
    cout << "Введіть на скільки відсотків зростають перегляди за день: ";
    cin >> p;
    cout << "Введіть кількість днів: ";
    cin >> t;
    cout << "Прогноз переглядів через " << t << " днів: " << v * pow((1 + p / 100.0), t) << endl; 

    return 0;
}