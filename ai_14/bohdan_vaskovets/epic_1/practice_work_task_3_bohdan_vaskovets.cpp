#include <iostream>
using namespace std;
#include <cmath>

int main(){
int V0=0, p=0, t=0;
float Vt=0;
printf ("Enter initial views, daily growth rate (in percent) and number of days: ");
scanf (" %d %d %d", &V0, &p, &t);
Vt = V0*pow(1+p/100.0, t);
printf  ("Growth (float): %.2f\n", Vt);
printf ("Forecast of views in %d days: %d", t, (int)round(Vt));
return 0;
}
