#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
int main() {
    int investment_sum;
    float percent;
    int type;
    float years;
    int type_number;
    float result;
    printf("print investment frequency of payments\n 1)per motht\n 2)per quarter\n 3)per year\n");
    scanf("%d", &type);
    printf("print investment sum\n");
    scanf("%d", &investment_sum);
    printf("print percent\n");
    scanf("%f", &percent);
    printf("print time in years\n");
    scanf("%f", &years);
    switch(type){
        case 1:
            type_number = 12;
            break;
        case 2:
            type_number = 4;
            break;
        case 3:
            type_number = 1;
        }
        percent = percent / 100;
        result = investment_sum * pow(1 + percent / type_number, type_number * years);
        printf("result is %f", result);
       
    }
