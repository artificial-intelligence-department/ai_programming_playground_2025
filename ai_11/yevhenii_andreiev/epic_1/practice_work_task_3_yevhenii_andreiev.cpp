#include <stdio.h>
#include <math.h>

int main() {
    double initial; // Приймаємо гроші у гривнях і копійках (до 2 знаку після коми)
    double rate; // double для більш точних обчислень
    unsigned int time; // В роках

    printf("Enter the initial investment: ");
    scanf("%lf", &initial);

    // Відкидаємо усі числа після другого числа після коми
    initial = (int) (initial * 100);
    initial = (double) initial / 100;

    printf("Enter the annual interest rate in percentages: ");
    scanf("%lf", &rate);

    rate /= 100; // Перевести у десяткову форму (наприклад 5% = 0.05)

    printf("Enter the time (in years) for which money is invested: ");
    scanf("%u", &time);

    unsigned char payment_option = 0; // Одного байту буде достатньо для 1, 2, або 3

    printf("\nChoose an interest payment option:\n1. Every month\n2. Every quarter\n3. Every year\n\n");
    printf("Your choice: ");
    scanf("%hhu", &payment_option);

    unsigned char n_payments; // Тут теж одного байту достатньо
    switch (payment_option) {
        case 1:
            n_payments = 12;
            break;
        case 2:
            n_payments = 4;
            break;
        case 3:
            n_payments = 1;
            break;
        default:
            printf("Wrong input! You can choose only 1, 2, or 3.\n");
            return 0;
    }

    double total_investment = initial * pow((1 + rate / n_payments), n_payments * time);

    printf("\nInvested money: %.2lf\n", initial);
    printf("Total investment amount: %.2lf\n", total_investment);
    printf("Profit: %.2lf", total_investment - initial);

    return 0;
}