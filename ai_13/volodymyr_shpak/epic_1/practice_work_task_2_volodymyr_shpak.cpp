#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "uk_UA.UTF-8");
    int V0,p,t;
    cout<<"Введіть початкову кількість переглядів:";
    cin>>V0;
    cout<<"Введіть приріст в день(в відсотках):";
    cin>>p;
    cout<<"Введіть кількість днів:";
    cin>>t;
    double V;
    V=V0*pow(1+p/100.0, t);
     cout << fixed << setprecision(2);
    cout << "Зростання:" <<setprecision(2)<< float (V-V0)<< endl;
    cout << "Прогноз перегляду через "<<t<<" днів:"<<(int)round(V);
    return 0;
}