#include <stdio.h>
#include <math.h>

int main() {
    float P, A, r, t;
    int n;

    printf("Your investment amount: ");
     if (scanf("%f", &P) != 1 || P <= 0) {
        printf("Error: Enter a valid positive amount!\n");
        return 1;
     }

    printf("annual interest rate: ");
    if ( scanf("%f", &r) != 1 || r < 0)  {
        printf("Error: Enter a valid non-negative rate!\n");
        return 1;
    }
   

    printf("number of interest payments per year: ");
    if(scanf("%d", &n) != 1 || n<=0) {
        printf("Error: Enter a valid positive time!\n");
        return 1;

    }
    

    printf("Time for which the money is invested, in years: ");
    if (scanf("%f", &t) != 1 || t<=0) {
        printf("Error: Enter a valid positive time!\n");
        return 1;
    }


    A = P * pow((1 + r/n), (n*t));

    printf("Deposit amount: %.2f UAH", A);


       return 0;
}
