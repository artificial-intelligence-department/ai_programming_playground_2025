#include <iostream>
#include <cmath>   
#include <cstdio>  
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8); 

    double P, r, t;
    int ch;
    int n = 0;  

    printf("Введіть початкову суму депозиту (P): ");
    scanf("%lf", &P);

    printf("Введіть річну процентну ставку (у %%): ");
    scanf("%lf", &r);

    printf("Введіть термін депозиту (у роках): ");
    scanf("%lf", &t);

    printf("Оберіть періодичність нарахування відсотків:\n");
    printf("1 - Кожного місяця\n");
    printf("2 - Кожного кварталу\n");
    printf("3 - Кожного року\n");
    printf("Ваш вибір: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1: n = 12; break;  
        case 2: n = 4;  break;  
        case 3: n = 1;  break;  
        default: 
            printf("Невірний вибір!\n");
            return 1;
    }

    r = r / 100.0;

    double A = P * pow(1 + r / n, n * t);

    double pr = A - P;

    printf("\n------ Результати депозиту ------\n");
    printf("Загальна сума депозиту: %.2f\n", A);
    printf("Заробіток: %.2f", pr);

    return 0;
}