#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float v0, t, p;
    cin >> v0 >> p >> t;
    float v1 = v0 *pow(1 + p/100, t);
    printf("Прогноз переглядів через %.0f днів: %0.f", t, v1);
    return 0;
}