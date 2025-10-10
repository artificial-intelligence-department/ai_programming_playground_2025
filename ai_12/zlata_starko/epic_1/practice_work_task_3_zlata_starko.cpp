#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

 int main(){
    int years;
    int time;
    double principal;
    double rate;

    printf("Введіть початкову суму інвестиції: ");
    scanf("%lf", &principal);

    printf("Введіть річну відсоткову ставку(%): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Введіть кількість років: ");
    scanf("%d", &years);

    printf("Оберіть спосіб виплат: \n1 - щорічно\n2 - кожного кварталу\n3 - щомісяця\n");
    scanf("%d", &time);

    if (time == 1){
        principal = principal * pow((1 + rate), years);
        printf("Загальна сума інвестиції через %d років: %.2lf", years, principal);
    }
    else if (time == 2){
        principal = principal * pow((1 + rate / 4), years * 4);
        printf("Загальна сума інвестиції через %d років: %.2lf", years, principal);
    }
    else if (time == 3){
        principal = principal * pow((1 + rate / 12), years * 12);
        printf("Загальна сума інвестиції через %d років: %.2lf", years, principal);
    }
    else{
        printf("Такого варіанту немає. Оберіть 1, 2 або 3.");
        return 1;
    }
    return 0;
 }