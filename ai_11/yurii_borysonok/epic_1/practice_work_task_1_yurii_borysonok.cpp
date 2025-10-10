#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
 float final_amount, initial_amount, rate;
 int time, count, a;
printf("Введіть початкову суму вкладу: ");
    scanf("%f", &initial_amount);
printf("Введіть річну процентну ставку (y відсотках): ");
    scanf("%f", &rate);
printf("Введіть кількість років: ");
    scanf("%d", &time);
    rate /= 100; 
    printf("Якщо виплати кожного місяця, напишіть 1\n");
    printf("Якщо виплати кожного кварталу, напишіть 2\n");
    printf("Якщо виплати кожного року, напишіть  3\n");
    scanf("%d", &a);
    switch (a) {
        case 1:
            count = 12;
            break;
        case 2:
            count = 4;
            break;
        case 3:
            count = 1;
            break;
        default:
            printf("Невірний вибір. Використовується річна виплата.\n");
            count = 1;
            break;
    }
    final_amount = initial_amount * pow((1 + rate / count), count * time);
    printf("Загальна сума після %d років: %.2f\n", time, final_amount);
    printf("Загальний прибуток: %.2f\n", final_amount - initial_amount);
    return 0;
}