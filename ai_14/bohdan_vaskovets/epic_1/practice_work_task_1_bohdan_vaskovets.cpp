#include <cmath>
#include <iostream>

int main (){
    double P, A,r;
    int n, t;
printf ("Enter the starting amount: ");
scanf ("%lf", &P );

printf ("Enter the annual interest rate (in %): ");
scanf ("%lf", &r );


printf ("Enter the payment intervals - 1 , 4 or 12: ");
scanf ("%d", &n );
if (!(n==1 || n==4 ||n==12)){
   printf("error");
   return 1;
}
printf ("Enter the number of years: ");
scanf ("%d", &t );
A = P *pow(1+(r/100)/n,n*t );
printf("Initial investment - %.2lf\nTotal amount - %.2lf after %d years\nNet profit - %.2lf", P, A, t,A-P);
}