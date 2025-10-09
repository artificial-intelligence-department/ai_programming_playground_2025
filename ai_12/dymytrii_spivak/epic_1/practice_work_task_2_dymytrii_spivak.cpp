#include <stdio.h>
int main() {
    printf("Ця програма обчислює заробітну плату працівника.\n");
    printf("Введіть ім'я працівника, кількість відпрацьованих годин та погодинну ставку: ");
    char name[50];
    int hours;
    float hourly_pay;
    scanf("%50s %d %f", name, &hours, &hourly_pay);
    printf("\nЗарплата працівника %s становить %.2f.", name, hours * hourly_pay);
    return 0;
}