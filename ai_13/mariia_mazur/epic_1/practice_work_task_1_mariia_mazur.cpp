#include <cstdio>
#include <cmath>
int main() {
    float P;
    float r;
    int n;
    int t;
    float A;
    printf(" enter P=");
    scanf("%f", &P);
    printf(" enter r=");
    scanf("%f", &r);
    printf(" enter n=");
    scanf("%d", &n);
    printf(" enter t=");
    scanf("%d", &t);
    A=P*pow((1+r/n),n*t);
    printf("A = %f\n", A);
    printf("P = %f\n", P);
    printf("r = %f\n", r);
    printf("n = %d\n", n);
    printf("t = %d\n", t);
    float delta=A-P;
    printf("delta = %f\n", delta);
    return 0;   

}