#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

double A(int P, float R, int N, int T){
    return (P * pow((1 + R/N), N*T));
}

int main() {
    float p, n, t, r;

    printf("Введіть початкову суму інвестиції, річну відсоткову стаку в десятковому вигляді, час, на який інвестуєте гроші у роках та кількість нарахувань за рік: ");
    scanf("%f %f %f %f", &p, &r, &n, &t);
    
    printf("Результат: %.2f", A(p, r, n, t));
    
    return 0;
}