#include <iostream>
#include <cmath>

int main(){

    std::string name;
    int hours;
    double wage,s;

    std::cout << "Enter your name: \n";
    std::cin >> name;

    std::cout << "Enter amount of hours: \n";
    std::cin >> hours;

    std::cout << "Enter your wage: \n";
    std::cin >> wage;

    s = wage * hours;

    std::cout << "Працівник " << name << " отримав зарплату: " << s;

    return 0;
}