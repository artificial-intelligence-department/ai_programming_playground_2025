#include <iostream>
using namespace std;
int main (){
    string name;
    double salary;
    int workhours;
    double payrate;
    cout<<"Введіть ім'я працівника: ";
    cin>>name;
    cout<<"Введіть кількість відпрацьованих годин: ";
    cin>>workhours;
    cout<<"Введіть погодинну ставку: ";
    cin>>payrate;
    salary=workhours*payrate;
    cout<<"Зарплата працівника "<<name<<" становить: "<<salary<<" грн\n";
    return 0;
   
}

