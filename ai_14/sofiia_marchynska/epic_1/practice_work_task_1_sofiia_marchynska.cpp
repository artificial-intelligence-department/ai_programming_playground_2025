#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "uk_UA.UTF-8"); 
    double P, r, A, profit;
    int n, t;
    printf("Введiть основну суму iнвестицiї: ");
    scanf("%lf", &P);
    printf("Введiть рiчну процентну ставку (у десятковому форматi): ");
    scanf("%lf", &r);
    do {
        printf("Введiть кiлькiсть нарахувань вiдсоткiв на рiк:\n 1.Раз на рiк - 1\n 2.Раз в квартал - 4\n 3.Кожен мiсяць - 12\n ");
        scanf("%d", &n);

        switch (n) {
        case 1:
        printf("Ви обрали нарахування один раз на рiк\n");
        break;
        case 4:
        printf("Ви обрали нарахування раз в квартал\n");
        break;
        case 12:
        printf("Ви обрали нарахування кожень мiсяць\n");
        break;
        
        default: 
        printf("Ви ввели неправильне значення, введiть ще раз\n");
        break;
        };
    } while (n !=1 && n !=4 && n !=12);

    printf("Введiть кiлькiсть рокiв, на якi здiйснюється iнвестицiя: ");
    scanf("%d", &t);
    A = P * pow(1 + r/n, n*t);
    profit = A - P;
    
    printf("Вкладенi кошти: %0.2lf грн\n", P);
    printf("Загальна сума iнвестицiї: %0.2lf грн\n", A);
    printf("Сума заробiтку: %0.2lf грн\n", profit);

    return 0;
};