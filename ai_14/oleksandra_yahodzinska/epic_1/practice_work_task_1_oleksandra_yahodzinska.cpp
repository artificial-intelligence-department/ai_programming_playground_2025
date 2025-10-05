#include <iostream>
#include <cmath>
#include <stdio.h>

int main(){

    double A, P, r, n, t;

    printf("Введіть вашу основну суму інвестицій: ");
    scanf("%lf", &P);

    printf("Введіть річну процентну ставку у десятковій формі: ");
    scanf("%lf", &r);

    printf("Введіть кількість нарахувань відсотків на рік: ");
    scanf("%lf", &n);

    printf("Введіть час, на який гроші інвестуються, у роках: ");
    scanf("%lf", &t);

    A = P * pow(1 + (r/n), n* t);
    double profit = A - P;

    printf("\nРезультати:\n");
    printf("Основна сума інвестицій: %.2f \n", P);  
    printf("Річна ставка: %.2f%%\n", r*100);
    printf("Кількість нарахувань відсотків на рік: %.0f \n", n);
    printf("Час, на який гроші інвестуються (у роках): %.2f \n", t);
    printf("Загальна сума інвестицій: %.2f \n", A);
    printf("Сума заробітку: %.2f \n", profit);


    return 0;
}