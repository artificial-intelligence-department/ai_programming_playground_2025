#include<math.h>
#include<stdio.h>


int main() {
    float investment;
    printf("Введіть розмір свого депозиту: ");
    scanf("%f", &investment);

    float time;
    printf("Введіть час на який буде внесок: ");
    scanf("%f", &time);

    float procent;
    printf("Вкажіть вашу процентну ставку: ");
    scanf("%f", &procent);

    int frequency;
    printf("Вкажіть як часто будуть виплати. Ваші варіанти це 1. кожного місяця, 2. кожного кварталу та 3. кожного року.(напишіть цифру зліва від варіантів, не пішить крапки після цифри): ");
    scanf("%d", &frequency);

    float payout_frequency;
    switch (frequency) {
        case 1:
            payout_frequency = 12.0f; // щомісяця
            break;
        case 2:
            payout_frequency = 4.0f; // щокварталу
            break;
        case 3:
            payout_frequency = 1.0f; // щороку
            break;
        default:
            payout_frequency = 1.0f; // значення за замовчуванням
            break;
    }

    float investment_afterhand = investment * powf((1.0f + procent / 100.0f / payout_frequency), payout_frequency * time);
    float income = investment_afterhand - investment;
    printf("Початкова загальна сума інвестиції: %.5f \n", investment);
    printf("Сума після закінчення терміну: %.5f\n", investment_afterhand);
    printf("Прибуток: %.5f \n", income);
}
