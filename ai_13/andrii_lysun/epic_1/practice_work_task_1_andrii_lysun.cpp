#include <iostream>
#include <string>

int main()
{
    std::string employee_name;
    int working_hours;
    float salary_per_hour;

    std::cout << "Enter employee name: ";
    std::cin >> employee_name;

    std::cout << "Enter working hours number: ";
    std::cin >> working_hours;

    std::cout << "Enter salary per hour: ";
    std::cin >> salary_per_hour;

    float total_salary = salary_per_hour * working_hours;

    std::cout << "\nTotal " << employee_name << "'s salary: " << total_salary << std::endl;

    return 0;
}