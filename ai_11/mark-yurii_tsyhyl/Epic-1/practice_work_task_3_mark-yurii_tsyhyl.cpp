#include <iostream>
#include <cmath>
#include <windows.h>

int main(){


    double v,p;
    int t;

    std::cout << "Введіть початкову кількість переглядів: \n";
    std::cin >> v;

    std::cout << "Введіть кількість відсотків: \n";
    std::cin >> p;

    std::cout << "Введіть кількість днів: \n";
    std::cin >> t;

    double x = v * pow(1 + p / 100, t);
    double y = round(x);

    std::cout << "Зростання (float): " << x << '\n';
    std::cout << "Прогноз переглядів через 10 днів: " << y << '\n';


    return 0;
}
