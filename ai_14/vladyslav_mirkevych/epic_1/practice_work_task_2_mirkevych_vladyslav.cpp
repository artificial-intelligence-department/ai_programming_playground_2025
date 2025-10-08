#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;
int main()
{ 
    string name;
    int workedhours;
    double salaryrate;
    cout << "Write name -";
    cin >> name;
    cout << "Write workedhours - ";
    cin >> workedhours;
    cout << "Write rate - ";
    cin >> salaryrate;
    cout << "Name - " <<name << "\nsalary : "  <<fixed << setprecision(2)<< salaryrate*workedhours;
    return 0;
     
}

