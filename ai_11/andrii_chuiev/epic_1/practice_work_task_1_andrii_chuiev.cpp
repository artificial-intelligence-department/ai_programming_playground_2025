#include <stdio.h>
#include <iostream>
#include <cmath>
int main() {
    double P,r, A;
    int n, t, choise;

    printf("Osnovna suma investytsii: ");
    scanf("%lf",&P);

    printf("richna protsentna stavka: ");
    scanf("%lf",&r);
    r=r/100.0;

    printf("chas, na yakyi hroshi investuiutsia, u rokakh: ");
    scanf("%d",&t);

    printf("Oberit variant vyplaty vidsotkiv:\n");
    printf("1-kozhnoho misiatsia, 2-kozhnoho kvartalu, 3-kozhnoho roku\n");
    printf("Vash vubir: ");
    scanf("%d",&choise);

    if (choise==1) n=12;
    else if (choise==2) n=4;
    else n=1;
    A=P*pow((1+r/n),(n*t));
    printf("vkladeni koshty: %.2f grn\n",P);
    printf("zahalna suma investytsii: %.2f grn\n",A);
    printf("suma samoho zarobitku: %.2f grn\n",A-P);
    return 0;
}