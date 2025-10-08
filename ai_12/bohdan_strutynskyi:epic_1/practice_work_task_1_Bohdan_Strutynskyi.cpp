#include <iostream>
#include <string>   
using namespace std;

int main() {
    int hours;
    float stavka;
    string name;

    cin >> name >> hours >> stavka;
    
    cout << "працівник " << name << " отримав зарплату " << hours*stavka << " ГРН";
}
