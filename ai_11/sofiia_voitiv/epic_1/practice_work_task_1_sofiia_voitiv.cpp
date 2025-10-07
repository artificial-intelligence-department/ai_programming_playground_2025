#include <iostream>
#include <math.h>

int main() {

    int years, choice, numb_of_paym;
    float percent, first_sum, finish_sum, earned_sum;

    printf("Введіть основну суму інвестиції (грн): ");
    scanf("%f", &first_sum);
   

    printf("Введіть річну процентну ставку (у десятковій формі, через крапку): ");
    scanf("%f", &percent);
   
    printf("Введіть час, на який гроші інвестуються, у роках: ");
    scanf("%d", &years);
   

    printf("Оберіть бажану кількість виплат на рік, для цього введіть відповідну цифру:\n"
           " 1 - кожного місяця,\n"
           " 2 - кожного кварталу,\n"
           " 3 - кожного року\n");
    scanf("%d", &choice);
    
    if (choice ==1){
        numb_of_paym = 12;
    }

     if (choice ==2){
        numb_of_paym = 3;
    }

     if (choice ==3){
        numb_of_paym = 1;
    }


    finish_sum = first_sum * pow((1 + (percent / numb_of_paym)), (years * numb_of_paym));
    earned_sum = finish_sum - first_sum;

    printf("Вкладені кошти - %.2f грн\n", first_sum);
    printf("Майбутня загальна сума інвестиції - %.2f грн\n", finish_sum);
    printf("Сума зароблених коштів - %.2f грн\n", earned_sum);

    return 0;
}