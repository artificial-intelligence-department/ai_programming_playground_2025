#include <cstdio>
#include <math.h>

int main(){
    double P, r, A;
    int t, n, choice;

    printf("Enter the investment amount: ");
    scanf("%lf", &P);

    printf("Enter the annual percentage rate (in %): ");
    scanf("%lf", &r);
    r/=100.0;

    printf("The time for which the money is invested, in years: ");
    scanf("%d", &t);

    printf("Accrual frequency:\n");
    printf("1 - monthly:\n");
    printf("2 - quarterly:\n");
    printf("3 - every year:\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: n=12; break; //місяць
        case 2: n=4; break; //квартал
        case 3: n=1; break; //рік
    }

    A = P * pow(1 + r/n, n*t);

    printf("\nResult\n");
    printf("Amount invested: %.2f \n", P);
    printf("Total investment amount: %.2f \n", A);
    printf("Earned profit: %.2f \n", A-P);

    return 0;
}