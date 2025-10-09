#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string name;
    int whours;
    float perhours;

    cin >> name >> whours >> perhours;
    float salary = whours * perhours;
    cout << fixed << setprecision(2);
    cout << "Worker " << name << " Take Salary " << salary;



    return 0;
}