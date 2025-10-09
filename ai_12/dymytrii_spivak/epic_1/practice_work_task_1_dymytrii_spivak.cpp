#include <stdio.h>

float exp(float input, int n) {
    float output = input;
    for (int i = 1; i < n; ++i) {
        output *= input;
    }
    return output;
}
float growth(float V, float p, int n) { return V * exp(1 + p / 100, n); }

int main() {
    printf("Це програма для розрахунку приросту перегляду відео.\n");
    printf(
        "Введіть початкове значення переглядів, на скільки відсотків їхня кількість збільшується щодня та кількість "
        "днів: ");
    float V, p;
    int days;
    scanf("%f %f %d", &V, &p, &days);
    float G = growth(V, p, days);
    printf("Через %d днів кількість переглядів становитиме %.2f або ж приблизно %.0f переглядів.", days, G, G);
    return 0;
}