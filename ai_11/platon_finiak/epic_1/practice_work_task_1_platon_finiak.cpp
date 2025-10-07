#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, P, r, n, t;
    printf("Введіть основну суму інвестиції: ");
    scanf("%f", &P);
    printf("\nВведіть річну процентну ставку: ");
    scanf("%f", &r);
    r /= 100;
    printf("\nВведіть кількість нарахувань відсотків на рік: ");
    scanf("%f", &n);
    printf("\nВведіть час, на який інвестуєте гроші(у місяцях): ");
    scanf("%f", &t);
    A = P*pow((1 + r/n), n*t/12);
    printf("\nМайбутня сума: %.2f грн", A);
    printf("\nПрибуток: %.2f грн\n", A - P);
    return 0;
}