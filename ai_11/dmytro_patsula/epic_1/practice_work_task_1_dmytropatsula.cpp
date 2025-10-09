#include <cstdio>
#include <cmath>

int main() {

    double p, r, A, profit;
int n, t;

printf("Your investment:");
scanf("%lf", &p);
if(p <= 0) {
    printf("Invalid input");
    return 0;
    
}
printf("Yearly interest rate (in percentage): ");
scanf("%lf", &r);
if (r < 0 || r > 100) {
        printf("Invalid input");
    return 0;
}
r = r / 100;

printf("Number of interest accruals per year(1,4,12):");
scanf("%d", &n);
if(!(n == 1 || n == 4 || n == 12)) {

     printf("Invalid input");
return 0;
}

printf("Number of years:");
scanf("%d", &t);
if(t <= 0) {
    printf("Invalid input");
    return 0;
    
}

A = p * pow((1 + r / n), n * t);
profit = A - p;

printf("You invested \"%.2f\"", p);
printf(" at a yearly interest rate of \"%.2d%%\"", (int)(r*100));
printf(" compounded \"%d\" times per year", n);
printf(" for \"%d\" years.\n", t);
printf(" The total amount after interest is \"%.2f\".\n", A);
printf(" Your profit is \"%.2f\".", profit);

    return 0;
}
