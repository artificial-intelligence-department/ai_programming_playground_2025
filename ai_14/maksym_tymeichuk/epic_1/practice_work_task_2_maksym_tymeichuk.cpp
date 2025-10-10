#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    float v,p,t;
    cout<<"Введіть потрібні данні: ";
    cin>>v>>p>>t;
    cout<<"Зростання (float): "<<v*pow((1+p/100),t)<<endl;
    cout<<"Прогноз переглядів через 10 днів: "<<ceil(v*pow((1+p/100),t));
   
    return 0; 
}