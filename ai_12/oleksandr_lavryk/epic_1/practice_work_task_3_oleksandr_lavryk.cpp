#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
    float a; // Майбутня загальна сума інвестиції, включаючи відсотки
    float p; // Основна сума інвестиції
    float r; // Річна процентна ставка (у десятковій формі, тобто 5% = 0,05)
    float t; // Час, на який гроші інвестуються, у роках
    int optionN; // Вибір кількості нархувань за рік (1; 4; 12)
    int n; // Кількість нарахувань відсотків на рік
    float e; // Заробіток


    printf("Enter the initial deposit amount: ");
    scanf("%f", &p);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &r);
    r = r / 100; // Переведення у десяткову форму

    printf("Enter the investment period (in years): ");
    scanf("%f", &t);

    do{
        printf("Choose interest compounding option:\n");
        printf("1 - Monthly\n");
        printf("2 - Quarterly\n");
        printf("3 - Annually\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &optionN);

        if(optionN<1 || optionN>3){
            printf("Choose the option from 1 to 3");
        }
    }
    while(optionN<1 || optionN>3);

    switch (optionN){
    case 1:
        n = 12;
        break;
    case 2:
        n = 4;
        break;
    case 3:
        n = 1;
        break;
    }

    a = p * pow(1 + r/n, n*t);
    e = a - p;
    printf("You invested: %.2f UAH\nTotal investment amount: %.2f UAH\nYou received: %.2f UAH\n", p, a, e);


    return 0;
}