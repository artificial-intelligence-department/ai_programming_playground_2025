#include <stdio.h>
int main(){
    printf("Напишіть імя працівника: ");
    char name[100];
    scanf("%s", name);
    printf("введіть кількість відпрацьованих годин: ");
    int hours;
    scanf("%d", &hours);
    printf("вкажіть погодинну ставку: ");
    float salary;
    scanf("%f", &salary);
    float result = hours * salary;
    printf("Працівник %s отримав зарплату: %.2f грн\n", name, result);
    return 0;
}