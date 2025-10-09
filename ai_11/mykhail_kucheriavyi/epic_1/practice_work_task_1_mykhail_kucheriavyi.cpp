#include <iostream>
#include <cmath>


int main () {
    int n,t;       
    float A,P;   
    const float r = 0.05;     
    printf("Enter Investment Fund: ");
    scanf("%f", &P);
    printf("Enter Income per Year(1 - One per Year, 4 - One per quater, 12 - One per month): ");
    scanf("%d", &n);
    if (n!=1 && n!=4 && n!=12) {  
        return 1;
    }
    printf("Enter how long in Years: ");
    scanf("%d", &t);
    A = P*pow(1 + r/n, n*t);   
    printf("Funds invested: ");
    printf("%.2f\n",P);
    printf("Total amount of the investment: ");
    printf("%.2f\n",A);
    printf("Total income: ");
    printf("%.2f",A-P);
    
    return 0;
}