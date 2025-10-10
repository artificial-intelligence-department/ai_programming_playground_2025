#include <iostream>
#include <iomanip>
using namespace std;

int main(){
string name;
int hour;
double per_hour;
cout << "Input name, hours, and hourly rate: ";
cin >> name >> hour >> per_hour;
double salary = hour*per_hour;
cout << "Employee " << name << " received a salary of " << fixed<< setprecision(2) << salary << " UAH.";
return 0;
}