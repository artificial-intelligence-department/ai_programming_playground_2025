#include <iostream>


#include <cmath>
#include <cstdio>

using namespace std;

int main(){
    double P,r,t;
    int n;

    printf("Введіть початкову суму (P): ");
    scanf("%lf", &P);

    printf("Введіть річну відсоткову ставку (у %%): ");
    scanf("%lf", &r);
    r = r / 100.0;

    printf("Введіть період (у роках): ");
    scanf("%lf", &t);

    printf("Оберіть період нарахування відсотків:\n");
    printf("1 - щомісяця\n2 - щокварталу\n3 - щороку\n");
    int option;
    scanf("%d", &option);

    if (option == 1)
        n = 12;
    else if (option == 2)
        n = 4;
    else
        n = 1;

    double A = P * pow(1 + r / n, n * t);
    double profit = A - P;

    printf("\n--- Результати ---\n");
    printf("Початкова сума: %.2f грн\n", P);
    printf("Підсумкова сума через %.1f років: %.2f грн\n", t, A);
    printf("Нараховані відсотки: %.2f грн\n", profit);


    return 0;
}