#include <cstdio>
#include <cmath>

int main() {
    float V0, p, Vt; 
    int t;         

    printf("Enter initial views, daily growth (5% = 5) and number of days:\n");
    scanf("%f %f %d", &V0, &p, &t);

    Vt = V0 * pow(1 + p / 100, t);

    printf("Growth: %.2f\n", Vt);
    printf("Predicted views after %d days: %.0f\n", t, (Vt + 0.5));

    return 0;
}
