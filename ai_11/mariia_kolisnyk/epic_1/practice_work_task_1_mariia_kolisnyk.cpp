#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {

    int P;
    printf("Введіть основну суму інвестиції:");
    scanf("%d", &P);


    char o;
    int n;

    printf("Виплати можливі:\n");
    printf("-	кожного місяця    - введіть 'x'\n");
    printf("-	кожного кварталу    - введіть 'y'\n");
    printf("-	кожного року    - введіть 'z'\n");

    
    scanf(" %c", &o);

    if (o == 'x') {
        n = 12;
    } else if (o == 'y') {
        n = 4;
    } else {
        n = 1;
    }


    float t;
    printf("Введіть час, на який гроші інвестуються (у роках): ");
    scanf("%f", &t);

    float r = 0.05;//річна процентна ставка 



    float A = P * pow((1 + r / n), n * t);
    float income = A - P;


    printf("Вкладені кошти: %d грн.\n", P);
    printf("Загальна сума інвестиції: %f грн.\n", A);
    printf("Сума заробітку: %f грн.\n", income);
    return 0;


}