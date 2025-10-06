#include <iostream>
#include <cmath>


int main() { 
    char n[10];
    int t;
    float p;
    scanf("%s %d %f", n, &t, &p);
    printf("Працівник %s отримав зарплату: %.2f грн.", n, t * p);
    return 0;
}