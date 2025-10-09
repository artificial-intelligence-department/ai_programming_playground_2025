#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    #ifdef _WIN32
    system("chcp 65001 > nul");
    #endif

    long int v0, p, t;
    scanf("%d %d %d", &v0, &p, &t);
    
    double vt = v0 * pow((1 + p / 100.0), t);

    printf("Очікуване зростання(float): %.2f\n", vt);
    printf("Прогноз через %d днів: %d", t, (int)round(vt));

    return 0;
}