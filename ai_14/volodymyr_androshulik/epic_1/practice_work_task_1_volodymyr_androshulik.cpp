#include <stdio.h>
#include <math.h>
int main()
{
    double A,P,r,t,profit;
    int n;
    printf("Введіть суму інвестиції ");
    scanf("%lf", &P);
    printf("Введіть річну відсоткову ставку (у відсотках): ");
    scanf("%lf", &r);
    printf("Введіть період інвестування (у роках)");
    scanf("%lf", &t);
    r = r/100;
    printf("Будь ласка, оберіть варіант виплати відсотків:\n1 - Кожного місяця\n2 - Кожного кварталу\n3 - Кожного року\n");
    switchstart:
    printf("Ваш вибір: ");
    scanf("%d", &n);
   
    switch (n)
    {
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
        printf("Такого вибору не існує! 0_0 Спробуй знову!\n");
        goto switchstart;
        break;
    }
    A = P * pow(1 + r / n, n * t);
    profit = A - P;
    printf("----------РЕЗУЛЬТАТИ----------\n");
    printf("Вкладена сума: %.2lf", P, " грн\n");
    printf("\nРічна відсоткова ставка: %.0lf %\n",r*100);
    printf("Період інвестування: %.2lf років\n", t);
    printf("Частота нарахувань: ");
    switch (n) {
        case 12: printf("щомісячно\n"); break;
        case 4:  printf("щоквартально\n"); break;
        case 1:  printf("щорічно\n"); break;
    }
    printf("Загальна сума інвестиції: %.2lf грн\n", A);
    printf("Ваш профіт: %.2lf грн\n", profit);

}