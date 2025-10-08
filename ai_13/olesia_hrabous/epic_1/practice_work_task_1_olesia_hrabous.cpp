#include <stdio.h> 
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF-8"); 
    double A, P, r;
    int n, t;

    printf("Введіть суму інвестиції: ");
    scanf("%lf", &P);
    printf("Введіть річну процентну ставку (у десятковій формі, тобто 5%% = 0,05): ");
    scanf("%lf", &r);
    printf("Введіть кількість нарахувань на рік: ");
    scanf("%d", &n);
    printf("Введіть час, най який гроші інвестуються (у роках): ");
    scanf("%d", &t);

    A = P * pow(1 + r/n, n*t);

    printf("Сума інвестиції = %.2lf\n", P);
    printf("Майбутня загальна сума інвестиції, включаючи відсотки  = %.2lf\n", A);
    printf("Прибуток = %.2lf\n", A - P);

    return 0;
}