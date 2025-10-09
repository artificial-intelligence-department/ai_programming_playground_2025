#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    char name[100];
    int hours;
    double rate;
    printf("Введіть ім'я, к-сть відпрацьованих годин та погодинну ставку: ");
    scanf("%s %d %lf", name, &hours, &rate);
    printf("Працівник %s отримав зарплату: %.2lf грн.", name, hours * rate);
    return 0;
}
