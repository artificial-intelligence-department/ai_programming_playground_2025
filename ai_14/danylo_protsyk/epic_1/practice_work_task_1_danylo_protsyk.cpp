#include <stdio.h>
#include <math.h>

int main() {
    double A, P, t;
    int n;                                             // змінна для кількості нарахувань відсотків на рік
    const int n_year = 1, n_quarter = 4, n_month = 12; // константи для варіантів n
    const double r = 0.05;                             // фіксована процентна ставка
    int discharge;
    int discharge_1, discharge_2, discharge_3; // варіанти виплат

    printf("Enter the principal investment amount: ");
    scanf("%lf", &P);

    printf("\nEnter the time period for which the money is invested, in years: ");
    scanf("%lf", &t);

    printf("\nEnter the number of interest accruals per year (1 - year, 2 - quarter, ");
    printf("3 - month (write correctly because the program is word-sensitive)): ");
    scanf("%d", &n); // Вписуємо всі потрібні штуки

    switch (n)
    {
    case 1: n = n_year; break;
    case 2: n = n_quarter; break;
    case 3: n = n_month; break;
    default:
        printf("\nYou entered the wrong number of interest accruals per year");
        return 1;
    } // Перевірка на правильність вводу n

    A = P * pow((1 + r / n), n * t);
    double earnings = A - P;     // Потрібні формули

    printf("When would you like to receive a discharge?: \n");
    printf("1 - yearly\n");
    printf("2 - quarterly\n");
    printf("3 - monthly\n");
    printf("Choice: ");
    scanf("%d", &discharge); // Запитуємо варіант виплат

    switch (discharge)
    {
    case 1:
        discharge_1 = P * pow((1 + r / 1), 1 * t);
        printf("You chose yearly discharge.\n");
        printf("With yearly compounding, your future total investment amount: %lf\n", (double)discharge_1);
        break;

    case 2:
        discharge_2 = P * pow((1 + r / 4), 4 * t);
        printf("You chose quarterly discharge.\n");
        printf("With quarterly compounding, your future total investment amount: %lf\n", (double)discharge_2);
        break;

    case 3:
        discharge_3 = P * pow((1 + r / 12), 12 * t);
        printf("You chose monthly discharge.\n");
        printf("With monthly compounding, your future total investment amount: %lf\n", (double)discharge_3);
        break;

    default:
        printf("Invalid discharge option\n");
        return 1;
    } // Проходиось по варіантах виплат і перевіряємо

    printf("Invested funds: %lf\n", P);
    printf("Total investment amount: %lf\n", A);
    printf("Earnings amount: %lf", earnings); // Вивід все що треба

    return 0;
}

/* Обчислення складних відсотків за депозитом

Задача
Обчислити складні відсотки для депозиту, який був відкритий в банку
на певний період часу під фіксовані відсотки з різними варіантами виплати відсотків.

Виплати можливі:
кожного місяця
кожного кварталу
кожного року

Мета Задачі
Навчитися користуватися функціями форматованого вводу/виводу - scanf та printf.
Вміти форматувати різні типи даних (за потребою з різною точністю)
Формула обчислення складних відсотків за депозитом:

Де:
A = Майбутня загальна сума інвестиції, включаючи відсотки
P = Основна сума інвестиції
r = річна процентна ставка (у десятковій формі, тобто 5% = 0,05)
n = кількість нарахувань відсотків на рік
t = час, на який гроші інвестуються, у роках

Вимоги:
Використати функції scanf та printf для для зчитування і форматування вводу/виводу;
В кінці програма має вивести повну інформацію про вкладені кошти,
загальну суму інвестиції і суму самого заробітку.
*/
/*
#include <iostream>
#include <cmath>

int main()
{

  double A, P, t;
  int n;                                             // змінна для кількості нарахувань відсотків на рік
  const int n_year = 1, n_quarter = 4, n_month = 12; // константи для варіантів n
  const double r = 0.05;                             // фіксована процентна ставка
  int discharge;
  int discharge_1, discharge_2, discharge_3; // варіанти виплат

  std::cout << "Enter the principal investment amount: ";
  std::cin >> P;

  std::cout << "\nEnter the time period for which the money is invested, in years: ";
  std::cin >> t;

  std::cout << "\nEnter the number of interest accruals per year (1 - year, 2 - quarter, ";
  std::cout << "3 - month (write correctly because the program is word-sensitive)): ";
  std::cin >> n; // Вписуємо всі потрібні штуки

  switch (n)
  {
  case 1: n = n_year; break;
  case 2: n = n_quarter; break;
  case 3: n = n_month; break;
  default:
    std::cout << "\nYou entered the wrong number of interest accruals per year";
    return 1;
  } // Перевірка на правильність вводу n

  A = P * pow((1 + r / n), n * t);
  double earnings = A - P;  
  // Потрібні формули

  std::cout << "When would you like to receive a discharge?: " << std::endl;
  std::cout << "1 - yearly" << std::endl;
  std::cout << "2 - quarterly" << std::endl;
  std::cout << "3 - monthly" << std::endl;
  std::cout << "Choice: ";
  std::cin >> discharge; // Запитуємо варіант виплат

  switch (discharge)
  {
  case 1:
    discharge_1 = P * pow((1 + r / 1), 1 * t);
    std::cout << "You chose yearly discharge." << std::endl;
    std::cout << "With yearly compounding, your future total investment amount: "
              << discharge_1 << std::endl;
    break;

  case 2:
    discharge_2 = P * pow((1 + r / 4), 4 * t);
    std::cout << "You chose quarterly discharge." << std::endl;
    std::cout << "With quarterly compounding, your future total investment amount: "
              << discharge_2 << std::endl;
    break;

  case 3:
    discharge_3 = P * pow((1 + r / 12), 12 * t);
    std::cout << "You chose monthly discharge." << std::endl;
    std::cout << "With monthly compounding, your future total investment amount: "
              << discharge_3 << std::endl;
    break;

  default:
    std::cout << "Invalid discharge option" << std::endl;
    return 1;
  } // Проходиось по варіантах виплат і перевіряємо

  std::cout << "Invested funds: " << P << std::endl;
  std::cout << "Total investment amount: " << A << std::endl;
  std::cout << "Earnings amount: " << earnings; // Вивід все що треба

  return 0;
} */



// Тут я трішки заплутався з варіантами виплат, бо не зовсім зрозумів логіку,
// але в цілому програма працює і дає правильний результат.
// P.S.Вибачте, що не використав scanf та printf, але нас вчили користуватися iostream,
// і мені так здається більш зручним.
// Думаю можна було обійтися без оцих всіх змінних discharge_1, discharge_2, ....
// Але я вирішив щось своє додати, щоб було цікавіше))
