#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    int views;
    std::cout << "Enter number of views: ";
    std::cin >> views;
    double growth_percentage;
    std::cout << "Enter growth percentage: ";
    std::cin >> growth_percentage;
    int time;
    std::cout << "Enter number of days: ";
    std::cin >> time;
    double views_2;
    views_2 = views * (pow(1 + growth_percentage / 100, time));
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Increasement: " << views_2 << std::endl;
    std::cout << "Views forecast for " << time << " days: " << (int)round(views_2) << std::endl;
    return 0;
}