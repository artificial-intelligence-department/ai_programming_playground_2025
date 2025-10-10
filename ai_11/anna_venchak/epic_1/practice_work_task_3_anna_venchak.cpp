#include <stdio.h>
#include <cmath>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int v0, t;
    float p, v;
    printf("Початково відео має таку кількість переглядів: ");
    scanf("%d", &v0);
    printf("Щодня кількість переглядів зростає на таку кількість відсотків: ");
    scanf("%f", &p);
    printf("Кількість днів, під час яких зростають перегляди: ");
    scanf("%d", &t);
    v = v0 * pow(1 + p / 100, t);
    printf("Зростання: %.2f\n", v);
    printf("Прогноз переглядів за %d днів: %.0f\n", t, v);

    return 0;
}