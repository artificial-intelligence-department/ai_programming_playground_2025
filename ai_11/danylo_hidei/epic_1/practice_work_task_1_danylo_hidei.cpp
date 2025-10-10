#include <stdio.h>
#include <math.h>

int main() {    
    int P, t;
    float r;

    printf("Введіть основну суму інвестиції: ");
    scanf("%d", &P);

    printf("Введіть річну процентну ставку (у десятковій формі): ");
    scanf("%f", &r);

    printf("Введіть час, на який гроші інвестуються (у роках): ");
    scanf("%d", &t);

    int choice, n;
    do {
        printf("Оберіть опцію виплат:\n0 - щомісяця\n1 - кожного кварталу\n2 - щорічно\n");
        scanf("%d", &choice);
    } while (choice != 0 && choice != 1 && choice != 2);
    if(choice == 0){
        n = 12;
    } else if (choice == 1){
        n = 4;
    } else if (choice == 2){
        n = 1;
    }

    float A = P * (pow((1 + r / n), n * t));
    float difference = A - P;

    printf("Майбутня загальна сума інвестиції, включаючи відсотки: %.2f\n", A);
    printf("Заробіток: %.2f\n", difference);

    return 0;
}