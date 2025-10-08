#include <stdio.h>
#include <math.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);
    float r, n, t, a, p1;
    printf("\nВведіть кількість переглядів, відсоток зростання та кількість днів: ");
    scanf(" %f %f %f", &p1, &r, &t);

    a = p1 * pow(1 + r / 100,  t);

    printf("Прогноз переглядів через 10 днів: %.0f\n", round(a) );

    return 0;
}