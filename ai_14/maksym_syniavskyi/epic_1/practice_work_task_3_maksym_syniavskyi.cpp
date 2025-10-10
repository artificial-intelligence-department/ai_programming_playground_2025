#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

double calculateCompoundInterest(double P, double r, int n, int t) {
    // P — початкова сума 
    // r — річна ставка (у вигляді десяткового дробу, наприклад, 0.05 для 5%)
    // n — кількість нарахувань на рік
    // t — кількість років
    double A = P * pow(1 + r / n, n * t);
    return A;
} 

int main() {
    char choice;
    string input;
    double P, r;
    int n, t;
    
    printf("Вітаємо у програмі вибору типу виплат!\n");
    printf("Ви можете обрати один з трьох типів виплат або вийти з програми, ввівши '0'.\n");
    printf("Оберіть тип виплат:\n");    
    printf("1. Кожного місяця\n");
    printf("2. Кожного кварталу\n");
    printf("3. Кожного року\n");
    do {   
        printf("Ваш вибір: ");
        char buf[100];
        scanf("%s", buf);
        input = buf;
        if (input.length() != 1) {
            printf("Введіть лише один символ!\n");
            continue;
        }
        
        choice = input[0];

        switch (choice) {
            case '1':
                n = 12;
                printf("Ви обрали виплати кожного місяця.\n");
                break;
            case '2':
                n = 4;
                printf("Ви обрали виплати кожного кварталу.\n");
                break;
            case '3':
                n = 1;
                printf("Ви обрали виплати кожного року.\n");
                break;
            case '0':
                printf("Вихід з програми. До побачення!\n");
                return 0;
            default: 
                printf("Невірний вибір.\n");
                continue;
        }
        
        printf("Введіть основну суму інвестиції: ");
        scanf("%lf", &P);
        printf("Введіть річну процентну ставку (наприклад, 0.05 для 5%%): ");
        scanf("%lf", &r);
        printf("Введіть кількість років: ");
        scanf("%d", &t);
        
        double A = calculateCompoundInterest(P, r, n, t);
        printf("Cума інвестиції: %.2lf\n", P);
        printf("Процентна ставка: %.2lf\n", r);
        printf("Cума заробітку: %.2lf\n", A - P);
        
        return 0;
    } while (choice != '0');

    printf("Вихід з програми. До побачення!\n");
    return 0;
}