#include <cstdio>      
#include <cmath>       
#include <iostream>


int main() {
    double P;     
    double r;      
    int choice;    
    double t;      
    int n;        
    double A;     
    
    printf("Enter the initial deposit amount : ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (%%): ");
    scanf("%lf", &r);

    printf("Enter the deposit period (in years): ");
    scanf("%lf", &t);

    printf("\nChoose an interest payment option:\n");
    printf("1 - monthly\n");
    printf("2 - quarterly\n");
    printf("3 - annually\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    
    if (choice == 1)
        n = 12;     
    else if (choice == 2)
        n = 4;      
    else
        n = 1;      

    
    r = r / 100.0;

    A = P * pow((1 + r / n), n * t);

    printf("\n----- Result -----\n");
    printf("Initial ammount: %.2lf grn\n", P);
    printf("Annual rate: %.2lf %%\n", r * 100);
    printf("Final investment ammount: %.2lf grn\n", A);
    printf("Interest ammount: %.2lf grn\n", A - P);

    return 0;
}
