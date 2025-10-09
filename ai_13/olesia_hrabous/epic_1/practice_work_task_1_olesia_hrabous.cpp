#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF-8");

    double A, P, r, t;
    int n, opt;

    printf("Введіть суму інвестиції: ");
    scanf("%lf", &P);

    printf("Введіть річну процентну ставку (у десятковій формі, тобто 5%% =   0,05): ");
    scanf("%lf", &r);

    printf("Оберіть тип нарахування відсотків (1 - щомісячно, 2 - щоквартально, 3 - щорічно): ");
    scanf("%d", &opt);
    if (opt == 1) {
        n = 12;
    } 
    else if (opt == 2) {
        n = 4;
    } 
    else if (opt == 3) {
        n = 1;
    } 
    else {
        printf("Помилка. Запустіть програму ще раз і оберіть 1, 2 або 3.\n");
        return 1; 
    }

    printf("Введіть час, на який гроші інвестуються (у роках): ");
    scanf("%lf", &t);

    A = P * pow(1 + r / n, n * t);
    printf("Початкова сума інвестиції = %.2lf\n", P);
    printf("Майбутня загальна сума інвестиції, включаючи відсотки = %.2lf\n", A);
    printf("Прибуток = %.2lf\n", A - P);
    return 0;
}
