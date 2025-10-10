#include <cstdio>
#include <cstring>
#include <cmath>

int main()
{

    char name[50];
    printf("Введіть ім'я працівника: ");
    scanf("%49s", name);

    int hours;
    printf("Введіть кількість відпрацьованих годин: ");
    scanf("%d", &hours);

    float wage;
    printf("Введіть погодинну ставку: ");
    scanf("%f", &wage);

    float earnings = hours * wage;
    printf("Працівник %s отримав зарплату %.2f\n", name, earnings);

    return 0;
}
