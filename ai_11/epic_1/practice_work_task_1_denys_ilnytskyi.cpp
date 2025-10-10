#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double P, A, r;
    int t, choice, n;

    printf("Основна сума інвестиції: ");
    scanf("%lf", &P);

    printf("Річна процентна ставка у десятковій формі(5%=0.05): ");
    scanf("%lf", &r);

    printf("Кількість років: ");
    scanf("%d", &t);

    printf("Оберіть варіант нарахування відсотків:\n");
    printf("1 - щомісяця\n");
    printf("2 - щокварталу\n");
    printf("3 - щороку\n");
    scanf("%d", &choice);

    if (choice == 1) n = 12;
    else if (choice == 2) n = 4;
    else if (choice == 3) n = 1;
    else {
        printf("Неправильний вибір!\n");
        return 0;
    }

    A = P * pow((1 + r/n), n*t);

    printf("\n Результати \n");
    printf("Вкладена сума: %.2f\n", P);
    printf("Загальна сума інвестиції: %.2f\n", A);
    printf("Заробіток (відсотки): %.2f\n", A - P);

    return 0;
}