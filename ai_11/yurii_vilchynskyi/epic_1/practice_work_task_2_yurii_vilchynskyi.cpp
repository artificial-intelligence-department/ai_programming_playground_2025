#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    char name[50]; // Ім'я працівника
    double x; // кількість відпрацьованих годин
    double y; // погодинна ставка
    double z; // заробіток працівника
    
    cout << "Enter employee`s name: ";
    cin >> name;

    cout << "Enter number of hours worked: ";
    cin >> x;

    cout << "Enter hourly rated: ";
    cin >> y;

    z = x*y;
    cout << fixed << setprecision(2); 
    cout << "Employee " << name << " earned a salary of " << z << " $";
    
    return 0;
}