#include <cmath>
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double V, p, t;

    printf("Перегляди, зростання (%%), дні: ");
    scanf("%lf %lf %lf", &V, &p, &t);

    double V_t = V * pow(1 + p / 100.0, t);

    printf("\nЗростання: %.2lf\n", V_t);
    printf("Прогноз переглядів через %.0lf днів: %.0lf", t, V_t);

    return 0;
}