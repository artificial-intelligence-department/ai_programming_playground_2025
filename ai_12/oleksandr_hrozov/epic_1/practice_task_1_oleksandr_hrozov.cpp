#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a;
    float p;
    float r=0.05;
    int n;
    int t;
    int obch;
    printf("Виберіть варіант обчислення:\n");
    printf("1 - за місяць\n");
    printf("2 - за квартал\n");
    printf("3 - за рік\n");
    scanf("%d", &obch);

    if (obch==1) {
        printf("Ви обрали обчислення за місяць\n");
        printf("Введіть початкову суму вкладу:\n");
        scanf("%f", &p);
        printf("Введіть час вкладу (в місяцях):\n");
        scanf("%d", &n);
        t=n/12;
        a = p * pow(1 + r / n, n * t);
        printf("Загальна сума інвестиції: %.2f\n", a);
        printf("Прибуток: %.0f\n", round(a - p));
    }
    else if (obch==2) {
        printf("Ви обрали обчислення за квартал\n");
        printf("Введіть початкову суму вкладу:\n");
        scanf("%f", &p);
        printf("Введіть час вкладу (в кварталах):\n");
        scanf("%d", &n);
        t=n/4;
        a = p * pow(1 + r / n, n * t);
        printf("Загальна сума інвестиції: %.2f\n", a);
        printf("Прибуток: %.0f\n", round(a - p));
    }
    else if (obch==3) {
        printf("Ви обрали обчислення за рік\n");
        printf("Введіть початкову суму вкладу:\n");
        scanf("%f", &p);
        printf("Введіть час вкладу (в роках):\n");
        scanf("%d", &n);
        t=n;
        a = p * pow(1 + r / n, n * t);
        printf("Загальна сума інвестиції: %.2f\n", a);
        printf("Прибуток: %.0f\n", round(a - p));
    }
    else {
        printf("Помилка! Виберіть 1, 2 або 3\n");
    }
    return 0;
}
