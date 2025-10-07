// Practice work task 2 - Oleksandr Kovtun
// #include <stdio.h>
#include <math.h>

int main() {
    float V0 = 10000.0;
    float p = 16.28895;
    int t = 10;
    float V;

    V = V0 * pow((1 + p / 100), t);

    printf("Projected views in %d days: %.2f\n", t, V);
    return 0;
}
