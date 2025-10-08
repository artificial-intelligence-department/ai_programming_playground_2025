#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
int main ()
{
    double P;
    double r;
    int n;
    int t;

    printf (  "Введіть суму інвестиції(P) у грн: ");
    scanf (  "%lf", &P );

    printf (  "Введіть річну процентну ставку(r) у %%: ");
    scanf (  "%lf", &r );
    r = r / 100;

    printf("Введіть кількість нарахувань відсотків (n): ");
    scanf (  "%d", &n );
    
    printf("Введіть кількість років (t): ");
    scanf (  "%d", &t );
    
double A = P * pow((1 + r / n), n * t);
    printf (  "Загальна сума інвестиції (A): %.2f\n", A );

double C = A - P;
    printf (  "Загальна сума заробітку (C): %.2f\n", C );

    return 0;
    
}