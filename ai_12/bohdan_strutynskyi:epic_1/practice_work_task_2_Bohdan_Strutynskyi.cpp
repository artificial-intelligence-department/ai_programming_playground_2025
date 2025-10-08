#include <iostream> 
#include <cmath> 
using namespace std;

int main(){
    int views , days;
    double res, proc; 

    cout << "введіть початкову кількість переглядів: ";
    cin >> views;
    cout << "введіть на скільки відсотків зростає кількість переглядів "; 
    cin >> proc;
    cout << "на скільки днів ми робимо прогноз? ";
    cin >> days;

    res = views*pow((1+proc/100) , days);
    cout <<"зростання:"  <<  res << endl;
    cout << "прогнозована кількість переглядів:" << round(res) << endl;
    return 0;
}