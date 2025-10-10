#include <iostream>
#include <stdio.h>


int main(){
    char name[10];
    scanf("%s", name);

    int hours;
    scanf("%d", &hours);

    float rate;
    scanf("%f", &rate);

    float salary = hours * rate;
    printf("Працівник %s отримав зарплату: %.2f грн", name, salary);

}


