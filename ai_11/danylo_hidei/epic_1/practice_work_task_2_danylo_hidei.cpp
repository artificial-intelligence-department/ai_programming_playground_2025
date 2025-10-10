#include <iostream>
#include <cstdio>

int main() {

    char name[50];
    printf("Enter name: ");
    scanf("%49s", name);

    int hours;
    printf("Enter hours worked: ");
    scanf("%d", &hours);

    float rate;
    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    float pay = hours * rate;
    printf("The employee %s got salary of:  %.2f\n", name, pay);

    return 0;
}