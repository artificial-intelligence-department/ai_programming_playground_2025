#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main (){
    setlocale(LC_ALL, "uk_UA");
    float a,p,r, zar;
    int t, vup,n;

    printf("Введіть початкову суму інвестиції:");
    scanf("%f",&p);

    printf("Введіть річну процентну ставку (у десятковій формі):");
    scanf("%f",&r);

    printf("Введіть час, на який гроші інвестуються, у роках:");
    scanf("%d",&t);

printf("Обери варіант виплати відсотків:\n");
printf ("1-кожного місяця\n");
printf ("2-кожного кварталу\n");	
printf ("3-кожного року\n");
printf ("Варіант:");
    scanf("%d",&vup);

if (vup==1){n=12;}
else if (vup==2){n=4;}
else if (vup==3){n=1;}
else {printf("Error");
return 1;}

printf("Початкова сума інвестиції: %f грн\n", p);
 printf("Річна процентна ставка (у десятковій формі): %.2f\n",r);
printf("Час, на який гроші інвестуються, у роках: %d\n", t);

printf("Варіант виплати відсотків:");
if (vup == 1) {printf("щомісяця\n");} 
else if (vup == 2) { printf("щокварталу\n");} 
else {printf("щороку\n");}

 a= p * pow((1 + r/n), n*t);
printf("Загальна сума інвестиції: %.2f грн\n", a);

zar=a-p;
printf("Загальна сума заробітку: %.2f грн\n", zar);
    return 0;
}