#include <iostream> // std::cin (для вводу з консолі) і std::cout (для виведення на консоль)
#include <string> // використовувати типи даних, які зберігають текстову інформацію
#include <cstdlib>  // Для std::stof, перетворення рядка в ціле число
#include <locale>
#include <cmath>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    std::string v0_str; // змінна для збереження введеної стрічки
    std::cout << "Введіть початкову кількість переглядів (V0): "; 
    std::getline(std::cin, v0_str); // std::getline зчитує введення користувачем (з пробілами), зберігає її у змінній input
    float v0 = std::stof(v0_str);

    std::string p_str;
    std::cout << "Введіть приріст відсотків перегляді за день (p): "; 
    std::getline(std::cin, p_str);
    float p = std::stof(p_str);

    std::string t_str;
    std::cout << "Введіть кількість днів (T): "; 
    std::getline(std::cin, t_str);
    float t = std::stof(t_str);

    std::cout << "V0 =  " << v0 << "\n";
    std::cout << "p =  " << p << "\n";
    std::cout << "t =  " << t << "\n";

    float result = v0 * pow(1 + p/100, t);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "result =  " << result << "\n";

    return 0;
}