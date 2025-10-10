#include <iostream>
#include <cmath>

int main() {
    int starting_views;
    printf("Введіть початкову кількість переглядів: ");
    scanf("%d", &starting_views);

    int percentage_increase;
    printf("Відсотковий приріст переглядів за день(%): ");
    scanf("%d", &percentage_increase);

    int days;
    printf("Введіть кількість днів: ");
    scanf("%d", &days);

    float final_sum = starting_views * pow((1 + (percentage_increase / 100.0)), days);
    printf("Зростання: %.2f\n", final_sum);
    printf("Прогнозована кількість переглядів: %d\n", int(final_sum));

    return 0;
}