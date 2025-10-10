#include <iostream>
#include <cmath>   
#include <cstdio>  
#include <windows.h>

main(){

    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8);

    int views, percent, days;
    double result;

    scanf("%d %d %d", &views, &percent, &days);

    result = 1+(percent/100.0);
    result = views*pow(result, days);

    printf("Зростання переглядів: %.2f\n", result - views);
    printf("Прогноз переглядів через %d днів: %.2f", days, result);

    return 0;
}