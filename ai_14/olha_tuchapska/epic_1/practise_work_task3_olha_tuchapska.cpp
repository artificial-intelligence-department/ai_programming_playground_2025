#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    double P, r, t; // початкова сума, ставка, час
    int choice;
    int n; // кількість нарахувань за рік

    printf("Введіть початкову суму депозиту (грн): ");
    scanf("%lf", &P);
    printf("Введіть річну процентну ставку (%%): ");
    scanf("%lf", &r);
    printf("Введіть термін депозиту (в роках): ");
    scanf("%lf", &t);

    printf("Оберіть варіант виплати відсотків:\n");
    printf("1 — щомісяця\n");
    printf("2 — щокварталу\n");
    printf("3 — щороку\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    if (choice == 1){
        n = 12;
    }            
    else if (choice == 2){
        n = 4;
    }      
    else if (choice == 3){
        n = 1;
    }    
    else {
        printf("Неправильний вибір!\n");
        return 0;
    }

    r /= 100.0;

    double A = P * pow(1 + r / n, n * t);
    double profit = A - P;

    printf("\n=== РЕЗУЛЬТАТ ===\n");
    printf("Початкова сума: %.2f грн\n", P);
    printf("Процентна ставка: %.2f%%\n", r * 100);
    printf("Термін: %.1f років\n", t);
    if (choice == 1){
        printf("Тип нарахування: щомісяця\n");
    }        
    else if (choice == 2){
        printf("Тип нарахування: щокварталу\n");
    }    
    else{
        printf("Тип нарахування: щороку\n");
    }
    printf("-------------------------\n");
    printf("Загальна сума з відсотками: %.2f грн\n", A);
    printf("Нараховані відсотки: %.2f грн\n", profit);

    return 0;
}
