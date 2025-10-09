#include <iostream> 
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
float r, A;
int P, n, t;

	printf("Specify the investment amount: "); 
    scanf("%d", &P);

    printf("Specify the annual interest rate: "); 
    scanf("%f", &r);

    printf("Number of interest payments per year: "); 
    printf("1 - monthly\n");
    printf("2 -  quarterly\n");
    printf("3 - annually\n");
    printf("Your choice: ");
    scanf("%d", &n);

    if( n == 1 || n == 2 || n == 3){
    printf("Specify the time period for which you are investing (years): "); 
    scanf("%d", &t);
    A = P * pow(1 + (r / 100) / n, n * t);

    printf("\nInvested funds: %d\n", P);
    printf("Amount of money after %d years: %.2f\n", t, A);
    printf("Funds earned:%.2f\n ", A - P);
}
    else   printf("Wrong");

    return 0;
}