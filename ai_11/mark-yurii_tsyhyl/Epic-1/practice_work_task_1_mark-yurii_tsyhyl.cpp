#include <iostream>
#include <cmath>
#include <cstdio>

int main(){

    double p,t,r;
    int n,choice;
    printf("Enter your deposit: \n");
    scanf("%lf", &p);

    printf("Enter r: \n");
    scanf("%lf", &r);
    r = r / 100;

    printf("Enter time: \n");
    scanf("%lf", &t);

    printf("Choose type pf payments \n1 - yearly\n2 - monthly\n3 - quartal \n");
    scanf("%d", &choice);


    if(choice == 1){

        n = 1;

    }
    else if (choice == 2)
    {
        n = 12;
    }
    else if (choice == 3){

        n = 4;

    }

    double a = p * pow((1 + r / double(n)), n * t);
    double interest = a - p;

    printf("Final amount: %lf\n",a);
    printf("Interest: %lf\n", interest);


    return 0;
}