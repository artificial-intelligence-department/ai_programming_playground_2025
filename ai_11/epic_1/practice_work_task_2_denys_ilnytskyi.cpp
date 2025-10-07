#include <stdio.h>
#include <iostream>

int main () {

    char name[50];
    int hours;
    float salary_p_hour;
    float S;

    scanf("%s %i %f", name, &hours, &salary_p_hour);

    S = hours*salary_p_hour ;

    printf("Працівник %s отримав зарлату: %.2f грн", name, S);


    return 0;
}