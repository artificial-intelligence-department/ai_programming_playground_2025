#include <cstdio>
int main() {
char name[20];
    printf("Введіть ім'я працівника: ");
    scanf("%20s", name);
int hours;
    printf("Введіть кількість відпрацьованих годин: ");
    scanf("%d", &hours);
float rate;
    printf("Введіть погодинну ставку: ");
    scanf("%f", &rate);
    float salary = hours * rate;
    printf("Працівник %s отримав зарплату: %.2f грн\n", name, salary);
    return 0;
}