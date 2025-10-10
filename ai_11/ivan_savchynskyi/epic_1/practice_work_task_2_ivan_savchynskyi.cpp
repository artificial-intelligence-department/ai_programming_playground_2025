#include <iostream>
#include <cmath>   
#include <cstdio>  
#include <windows.h>

main(){

    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);

    char name[20];
    int hours;
    double rate, result;

    scanf("%s %d %lf", name, &hours, &rate);

    result = hours * rate;

    printf("Працівник %s отримав зарплату: %.2f", name, result);

    return 0;
}