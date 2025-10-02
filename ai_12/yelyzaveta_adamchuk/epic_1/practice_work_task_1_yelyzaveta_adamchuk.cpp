#include <iostream>
using namespace std;

int main() 
{
    string Name;
    int WorkedHours;
    double PerHour;
    double EndSalary;

    cout << "Write your name: " << endl;
    cin >> Name;  

    cout << "Write your worked hours: " << endl;
    cin >> WorkedHours;

    cout << "Write your salary per hour: " << endl;
    cin >> PerHour;

    EndSalary = WorkedHours * PerHour;
    //make math round
    EndSalary = (int)(EndSalary * 100 + 0.5) / 100.0;

    cout << "Worker " << Name << " gets " << EndSalary << " UAH" << endl;

    return 0;
}
