#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int V0, t;
    float p, r;
    printf("Введіть початкову кількість переглядів: ");
    scanf("%d", &V0);
    printf("Введіть відсоток приросту в день: ");
    scanf("%f", &p);
    printf("Введіть скільки днів пройшло: ");
    scanf("%d", &t);
    r = pow((1 + p/100), t) * V0;
    printf("Кількість переглядів через %d днів: %.0f", t, r);

    return 0;
}
