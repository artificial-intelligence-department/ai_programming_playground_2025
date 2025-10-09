#include <cstdio>   
#include <cmath>    //для pow()

int main() {
    double P, r, A;  // основна сума, річна ставка, кінцева сума
    int t, choice;   // час у роках і варіант виплат
    int n;           // кількість нарахувань відсотків на рік

    printf("Введіть депозит  ");
    scanf("%lf", &P);

    printf("Введіть річну процентну ставку ");
    scanf("%lf", &r);
    r /= 100.0; 

    printf("Введіть термін депозиту  ");
    scanf("%d", &t);

    printf("\nОберіть варіант виплати відсотків:\n");
    printf("1 - кожного місяця\n");
    printf("2 - кожного кварталу\n");
    printf("3 - кожного року\n");
    printf("Ваш вибір ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: n = 12; break;   
        case 2: n = 4;  break;   
        case 3: n = 1;  break;  
        default:
            printf("невірний вибір!\n");
            return 1;
    }

    A = P * pow(1 + r / n, n * t);
    double profit = A - P;

    // Вивід результатів з форматуванням
    printf("Початкова сума %.2f грн\n", P);
    printf("Річна ставка %.2f%%\n", r * 100);
    printf("Період %d років\n", t);
    printf("Тип нарахування %s\n", (n == 12) ? "щомісячно" : (n == 4) ? "щоквартально" : "щорічно");
    printf("Загальна сума інвестиції %.2f грн\n", A);
    printf("Заробіток (відсотки) %.2f грн\n", profit);

    return 0;
}
