#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float p;
    int V0, t;
    printf("Введіть початкову к-сть переглядів, відсоток, на який зростанє к-сть переглядів, кількість днів: ");
    scanf("%d %f %d", &V0, &p, &t);
    float V = V0 * (pow(1 + p / 100, t));
    printf("Зростання(float): %.2f\nПрогноз переглядів через %d днів: %.0f", V, t, V);


    return 0;
}