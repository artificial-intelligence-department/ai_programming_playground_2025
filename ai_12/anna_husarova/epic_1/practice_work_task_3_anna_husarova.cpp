#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    double P, r, t, A, sum;
    int choice, n;

    printf("Введіть суму депозиту : ");
    scanf("%lf", &P);

    printf("Введіть  річну процентну ставку (у десятковій формі, тобто 5%%=0,05):");
    scanf("%lf", &r);
  
    printf("Введіть термін депозиту у роках: ");
    scanf("%lf", &t);

    printf("Виберіть період нарахування відсотків:\n");
    printf("1 - щомісяця\n");
    printf("2 - щокварталу\n");
    printf("3 - щорічно\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);


   if (choice == 1) {
        n = 12; 
    } else if (choice == 2) {
        n = 4;  
    } else if (choice == 3) {
        n = 1;  
    } else {
        printf(" Неправильний вибір. Використано щорічне нарахування.\n");
        n = 1;
    }
    
    A = P * pow(1 + r / n, n * t);
    sum = A - P;

 
    printf("\n---- Результати депозиту ----\n");
    printf("Вкладені кошти: %.lf грн\n", P);
    printf("Сума інвестиції за %.lf років: %.lf грн\n", t, A);
    printf("Сума заробітку: %.lf грн\n", sum);

    return 0;
}
