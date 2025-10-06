#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int P, opt, t;
    float r;
    int interest_rate[3] = {12, 4, 1};

    printf("Основна сума інвестицій: ");
    scanf("%d", &P);

    printf("Річна процентна ставка: ");
    scanf("%f", &r);

    printf("Тип нарахувань: 1)Кожен місяць 2)Кожен квартал 3)Кожен рік: ");
    scanf("%d", &opt);

    printf("Час, на який гроші інвестуються, у роках: ");
    scanf("%d", &t);
    
    float invest = P*pow(1 + r/interest_rate[opt-1], interest_rate[opt-1]*t);
    printf("\nПочатковий вклад: %d\n", P);
    printf("Загальна сума інрвестицій: %.2f\n", invest);
    printf("Прибуток: %.2f\n", invest - P);

    return 0;
}


