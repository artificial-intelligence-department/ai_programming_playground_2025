#include <stdio.h>

#include <cmath>



int main(){
    printf("Напишіть скільки грошей ви вклали: ");
    int P;
    scanf("%d", &P);
    printf("Річну відсоткову ставку: ");
    float r;
    scanf("%f", &r);
    r = r / 100;
    printf("Кількість років: ");
    int t;
    scanf("%d", &t);
    int x;
    int n;
    do 
    {
        printf("Виберіть тип нарахування відсотків (1 - щорічне, 2 - щоквартальне, 3 - щомісячне): ");
        scanf("%d", &x);
        
        if (x == 1) {
            n = 1;
        } else if (x == 2) {
            n = 4;
        } else if (x == 3) {
            n = 12;
        } else {
            printf("Неправильний вибір. Спробуйте ще раз.\n");
            
        }

    }while (x!=1 && x!=2 && x!=3);

    float A = P * pow((1 + r / n), n * t);
    printf("Сума накопичених коштів: %.2f\n", A);
    printf("Заробіток: %.2f\n", A - P);
    return 0;
}