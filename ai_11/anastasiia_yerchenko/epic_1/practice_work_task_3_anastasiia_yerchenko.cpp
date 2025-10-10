#include <iostream>
#include <cmath>

int main() {
    float V, p, R, t;
    printf("Яка початкова кількість переглядів відео?\n");
    scanf("%f", &V);
    printf("На скільки відсотків зростає кількість переглядів щодня?\n");
    scanf("%f", &p);
    printf("Кількість днів:\n");
    scanf("%f", &t);
    R = V * pow(1 + (p / 100.0f), t);
    printf("\nЗростання: %.2f \n", R);
    printf("Очікувана кількість переглядів через %.f днів:", t);
    printf(" %.f \n", R);
    return 0;
}
