#include <cstdio>

using namespace std;

int main () {
    int P, n, t;
    double r;

    printf("Enter P: ");
    scanf("%i", &P);
    printf("Enter r: ");
    scanf("%lf", &r);
    r /= 100;
    printf("Enter n: ");
    scanf("%i", &n);
    printf("Enter t: ");
    scanf("%i", &t);

    double tmp = 1 + (r / n);
    double A = P;

    for (int i = 0; i < n * t; i++) {
        A *= tmp;
    }

    printf("Result: %lf\n", A);
    printf("Profit: %lf\n", A - P);

    return 0;
}
