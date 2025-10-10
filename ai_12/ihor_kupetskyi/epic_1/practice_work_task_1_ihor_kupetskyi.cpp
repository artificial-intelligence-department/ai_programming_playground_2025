#include <cstdio>

int main() {
    char name[50];
    int hours;
    double rate, salary;

    printf("Введіть ім'я працівника, кількість годин і погодинну ставку:\n");
    scanf("%s %d %lf", name, &hours, &rate);

    salary = hours * rate;

    printf("Працівник %s отримав зарплату: %.2f грн\n", name, salary);

    return 0;
}