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
    int n;
    printf("Кількість нарахувань відсотків за рік: ");
    scanf("%d", &n);
    
    float A = P * pow((1 + r / n), n * t);
    printf("Сума накопичених коштів: %.2f\n", A);
    printf("Заробіток: %.2f\n", A - P);
    return 0;
}