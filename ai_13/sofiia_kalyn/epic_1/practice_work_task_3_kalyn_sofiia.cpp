#include <iostream>
#include <cstdio>
#include <locale>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    float P, r, n, t, A, profit;
    int option;

    printf("Введіть основну суму інвестиції: ");
    scanf("%f", &P);
    printf("Введіть річну процентну ставку у десятковій формі: ");
    scanf("%f", &r);
    printf("Введіть час у роках, на який гроші інвестуються: ");
    scanf("%f", &t);

    printf("1 - Щомісяця\n");
    printf("2 - Щокварталу\n");
    printf("3 - Щороку\n");
    printf("Виберіть варіант виплат: \n");
    scanf("%d", &option);

    switch (option) {
        case 1:
            n = 12;
            break;
        case 2:
            n = 4;
            break;
        case 3:
            n = 1;
            break;
        default: 
            printf("Такого вибору не існує.\n");
            return 0;
    }
    A = P * pow((1 + r / n), n * t);
    profit = A - P;

    printf("Основна сума інвестиції (вкладені кошти) = %.2f\n", P);
    printf("Загальна сума інвестиції = %.2f\n", A);
    printf("Сума заробітку = %.2f\n", profit);
    return 0;
}