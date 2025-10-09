#include <iostream> 
using namespace std;

int main() {
    string name;
    double h, st;
    cout<<"Введіть ім'я працівника: "; 
    cin>>name;
    cout<<"Введіть кількість відпрацьованих годин: ";
    cin>>h;
    cout<<"Введіть погодинну ставку: ";  
    cin>>st;

    cout<<"Працівник "<<name<<" отримав зарплату ";
    printf("%.2f", h*st);

    return 0; 
}