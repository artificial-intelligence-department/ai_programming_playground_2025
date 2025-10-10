#include <iostream>
using namespace std;

string name;
int hours_worked;
double wage, salary;

int main()
{
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Alright, " << name << ". Please enter the number of your hours worked: ";
    cin >> hours_worked;
    cout << "Now enter your hour wage: ";
    cin >> wage;
    
    salary = hours_worked * wage;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << "An employee " << name << " recieved a salary of: " << salary;
    
    return 0;
}