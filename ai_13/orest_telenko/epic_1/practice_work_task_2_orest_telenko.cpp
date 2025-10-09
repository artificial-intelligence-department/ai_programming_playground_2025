#include <iostream>
#include <cstdio>
int main(){
    char name[100];
    int working_hours;
    float money_per_hour;
    float wage;
    scanf("%s %d %f", name, &working_hours, &money_per_hour);
    wage = working_hours * money_per_hour;
    printf("%s, %.2f\n", name, wage);
}