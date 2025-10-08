#include<cstdio>
#include<cmath>
using namespace std;
int main(){
float P,r;
unsigned int t, n;
printf("P(Основна сума інвестиції) = ");
scanf("%f", &P);
if (P<=0){
    printf("Помилка\n");
    return 0;  
}
printf("r(річна процентна ставка) = ");
scanf("%f", &r);
if (r<=0 || r>1){
    printf("Помилка\n");
    return 0;  
}
printf("t(час, на який гроші інвестуються, у роках) = ");
scanf("%u", &t);
if(t<=0){
    printf("Помилка\n");
    return 0;  
}
printf("n(кількість нарахувань відсотків на рік) = ");
scanf("%u", &n);
if (n !=1 && n !=4 && n !=12){
    printf("Помилка\n");
    return 0; 
}
float A = P * pow(1 + r/n, n*t);
switch(n){
    case 1: printf("Раз на рік буде виплата у розмірі %.2f\n", A); break;
    case 4: printf("Чотири рази в рік, тобто кожного кварталу буде виплата у розмірі %.2f\n", A); break;
    case 12: printf("Дванадцять разів на рік, тобто щомісяця буде виплата у розмірі %.2f\n", A); break;
    default: printf("Помилка\n");
}
printf("Основна сума інвестиції = %.2f\n", P);
printf("Загальна сума інвестиції = %.2f\n", A);
float zarobitok = A - P;
printf("Заробіток = %.2f\n", zarobitok);
    return 0;
}