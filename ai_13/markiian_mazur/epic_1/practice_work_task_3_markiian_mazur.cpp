#include <cstdio>
#include <cmath>

int main() {
    int initial_money;
    double annual_rate;
    int interval;
    int years;
    double future_value;
    double profit;

    printf("Введіть початкову суму інвестиції\n");
    scanf("%d", &initial_money);
    printf("Введіть річну процентну ставку(у десятковій формі)\n");
    scanf("%lf", &annual_rate);
    printf("Введіть час депозиту(у роках)\n");
    scanf("%d", &years);
    while(true) {
        printf("Введіть інтервал виплат:\n1. Кожного року \n2. Кожного кварталу\n3. Кожного місяця\n");
        scanf("%d", &interval);
        switch(interval) {
            case 1:
                break;
            case 2:
                interval = 4;
                break;
            case 3:
                interval = 12;
                break;
            default:
                printf("Введіть 1, 2 або 3\n");
                continue;
        }
        break;
    }

    future_value = initial_money*(pow((1+annual_rate/interval), interval*years));
    profit = future_value - initial_money;

    printf("Інвестовано %d грн під річну ставку %.2lf відсотків на термін %d років. Виплати за відсотками нараховуються %d разів на рік.\n", initial_money, annual_rate*100, years, interval);
    printf("Майбутня вартість = %.2lf\nПрибуток = %.2lf", future_value, profit);

    return 0;
}
