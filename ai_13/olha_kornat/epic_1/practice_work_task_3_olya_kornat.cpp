#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {

    double V;
    int t, p, V0;

    printf("initial number of views: ");
    scanf("%d", &V0);

    printf("expected increase in views (in%): ");
    scanf("%d", &p);

    printf("number of days: ");
    scanf("%d", &t);

    V = V0 * pow((1 + p /100.0), t);

    printf("float after %d days: %.2lf\n", t, V);
    printf ("number of views ater %d days: %.0lf\n", t, V);

return 0;

}