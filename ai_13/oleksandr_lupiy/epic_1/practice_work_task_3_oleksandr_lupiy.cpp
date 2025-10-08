#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, a, t, n;
    printf("Введіть основну суму інвестиції: ");
    scanf("%f", &p);
    printf("Введіть річну відсоткову ставку: ");
    scanf("%f", &r);
    r = r / 100;
    printf("Введіть кількість нарахувань на рік: ");
    scanf("%f", &n);
    printf("Введіть час на який інвестуєте (в роках): ");
    scanf("%f", &t);
    a = p * pow((1 + r / n), n * t);
    printf("Ви вклали: %.2f; за %.0f років ваш рахунок %.2f; ви отримали %.2f", p, t, a, a-p);

    return 0;
}
