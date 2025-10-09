#include <cstdio>   
#include <cmath>    

int main() {
    double V0;      
    double p;       
    int t;          
    double growth;  
    long long Vt;   

    printf("Enter the initial number of views, growth rate (%%) and the number of days:\n");
    scanf("%lf %lf %d", &V0, &p, &t);

    p = p / 100.0;

    growth = V0 * pow((1 + p), t);   
    Vt = (long long)(growth + 0.5);  

    printf("Increase: %.2lf\n", growth);
    printf("View forecast after %d days: %d\n", t, Vt);

    return 0;
}
