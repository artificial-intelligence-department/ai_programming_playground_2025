#include <stdio.h>  

int main() {
    char N[30];
    int t;
    float n, R;

    printf("Введіть ім'я працівника:\n");
    scanf("%s", N);
    printf("Введіть кількість відпрацьованих годин:\n");
    scanf("%d", &t);
    printf("Введіть погодинну ставку:\n");
    scanf("%f", &n);
    R = n * t;
    printf("\nСума заробітної плати працівника %s\n", N);
    printf("Відпрацьовані години: %d\n", t);
    printf("Погодинна ставка: %.1f грн\n", n);
    printf("Заробітна плата: %.2f грн\n", R); 

    return 0;
}
