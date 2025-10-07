#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

int main()
{
    int input_money;
    int time;
    int num_of_cashouts_per_year;
    const double percent = 0.05;
    double income;
    double final_money;
    char rate_of_cashouts[20];

    printf("Введіть суму інвестицій: ");
    scanf("%d", &input_money);
    
    if (input_money <= 0) {
        printf("Сума інвестиції повиннна бути більшою за 0, та містити лише цифри");
        return 1;
    }
    
    printf("Введіть час: ");
    scanf("%d", &time);
    
    if (time <= 0) {
        printf("Час інвестицій повинен бути більшим за 0, та містити лише цифри");
        return 1;
    }

    printf("Введіть частоту виплат(monthly/quarterly/yearly): ");
    scanf("%19s", rate_of_cashouts);
    
    if (strcmp(rate_of_cashouts, "monthly") == 0) {
        num_of_cashouts_per_year = 12;
    }
    else if (strcmp(rate_of_cashouts, "quarterly") == 0) {
        num_of_cashouts_per_year = 4;
    }
    else if (strcmp(rate_of_cashouts, "yearly") == 0) {
        num_of_cashouts_per_year = 1;
    }
    else {
        printf("Невірний формат частоти виплат, виберіть один з цих: monthly/quarterly/yearly");
        return 1;
    }
    
    final_money = input_money * pow((1 + percent / num_of_cashouts_per_year), (num_of_cashouts_per_year * time));
    income  = final_money - input_money;

    printf("Початкова загальна сума інвестиції: %d \n", input_money);
    printf("Майбутня загальна сума інвестиції, включаючи відсотки: %.2f \n", final_money);
    printf("Сума заробітку: %.2f", (income));
    
    return 0;
}
