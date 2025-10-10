#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
setlocale(LC_ALL, "ukr");
float result, main_sum, percents, time;
int frequency_p;

    printf ("Введіть основну суму вкладу: ");
    scanf ("%f", &main_sum);
    printf ("Введіть річну відсоткову ставку: ");
    scanf ("%f", &percents);
    printf ("Введіть час, на який гроші інвестуються(в роках): ");
    scanf ("%f", &time);

    printf ("Вкажіть, як часто нараховуються відсотки:\n");
    printf("0 - щомісяця\n");
    printf("1 - щокварталу\n");
    printf("2 - щороку\n");
    printf("Ваша відповідь: ");
    scanf("%d", &frequency_p);
    
    int n;
    switch (frequency_p)
    {
    case 0:
        n = 12;
        break;
    case 1:
        n = 4;
        break;
    case 2:
        n = 1;
        break;
    default:
        printf ("ERROR\n");
        system("pause");
        return 0;
        break;
    }

float r = percents / 100;
float A = main_sum * pow(1 + r/n, n * time);
float profit = A - main_sum;

printf("Початкова вкладена сума: %f\n", main_sum);
printf("Загальна сума інвестиції (з відсотками): %f\n", A);
printf("Заробіток: %f\n", profit);


    return 0;
}