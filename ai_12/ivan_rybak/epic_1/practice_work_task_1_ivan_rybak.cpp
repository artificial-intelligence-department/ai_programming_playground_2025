#include <cstdio>      
#include <cmath>       
#include <iostream>


int main() {
    double P, r, A, t;     
    short choice;       
    int n;      

    printf("Enter the initial deposit amount : ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (%%): ");
    scanf("%lf", &r);

    printf("Enter the deposit period (in years): ");
    scanf("%lf", &t);

    printf("\nChoose an interest payment option:\n1 - monthly\n2 - quarterly\n3 - annually\nYour choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: n = 12; break;
        case 2: n = 4; break;
        default: n = 1; break;
    }


    r /= 100.0;

    A = P * pow((1 + r / n), n * t);

    printf("\n----- Result -----\n");
    printf("Initial ammount: %.2lf grn\n", P);
    printf("Annual rate: %.2lf %%\n", r * 100);
    printf("Final investment ammount: %.2lf grn\n", A);
    printf("Interest ammount: %.2lf grn\n", A - P);

    return 0;
}