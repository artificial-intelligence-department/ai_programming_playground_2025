#include <stdio.h>
#include <cmath>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);
    printf("Напишіть скільки грошей ви вклали: ");
    int p;
    scanf("%d", &p);
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
    
    float a = p * pow((1 + r / n), n * t);
    printf("Сума накопичених коштів: %.2f\n", a);
    printf("Заробіток: %.2f\n", a - p);
    return 0;
}