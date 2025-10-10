#include <stdio.h>
#include <cmath>

int main () {

    float deposit, procent, result, profit, time;
    int n;

    printf ("Введіть суму інвестиції у грн: ");
    scanf ("%f", &deposit);
    for (; deposit < 0; scanf ("%f", &deposit)) {
        printf ("Вклад менший за 0 грн. Введіть нову суму інвестиції у грн: ");
    }

    printf ("Яка процентна ставка інвестиції: ");
    scanf ("%f", &procent);
    for (; procent <= 0 || procent > 100 ; scanf ("%f", &procent)) {
        printf ("Відсоток менший або рівний 0 відсоткам або більший за 100 відсотків. Введіть нову процентну ставку інвестиції: ");
    }

    printf ("На скільки років вкладається інвестиція: ");
    scanf ("%f", &time);
    for (; time < 0; scanf ("%f", &time)) {
        printf ("Неможливий час. Введіть нову кількість років, на яку вкладається інвестиція: ");
    }
    
    printf ("Який варіант виплат? Напишіть 1 - якщо щорічно, 2 - якщо щокварталу, 3 - якщо щомісячно: ");
    scanf ("%d", &n);
    for (; n < 1 || n > 3; scanf("%d", &n)) {
        printf ("Неправильне число. Напишіть 1 - якщо щорічно, 2 - якщо щокварталу, 3 - якщо щомісячно: ");
    }
    if (n == 1){
        n = 1; }
    if (n == 2){
        n = 4; }
    if (n == 3){
        n = 12; }
    
    result = deposit * pow (1 + procent/100/n, n * time);
    profit = result - deposit;
    printf ("Ви вклали %.2f грн на %.1f років. \nВаша баланс - %.2f грн, ваш прибуток - %.2f грн", deposit, time, result, profit);
    return 0;
}