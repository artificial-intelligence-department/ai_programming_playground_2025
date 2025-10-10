#include <iostream>
#include <cstdio>   // для printf і scanf
#include <cmath>
using namespace std;
int main() {
    double V0, p; 
    int t;        
    double total_views;
    printf("Enter the initial number of views: ");
    scanf("%lf", &V0);
    printf("Enter the daily growth rate (in %%): ");
    scanf("%lf", &p);
    printf("Enter the number of days after which you want to know the expected views: ");
    scanf("%d", &t);
    total_views = V0 * pow(1 + p / 100.0, t);
    printf("Increase in views: %.2lf\n", total_views - V0);
    printf("Predicted views after %d days: %.2lf\n", t, total_views);
    return 0;
}
