#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char name[50];
	int hours;
	float cost_per_hour;
    
	printf("Зарплата працівника\n\n");

	printf("Введіть через пробіл:\n");
	printf("1) ім’я працівника (рядок)\n");
	printf("2) кількість відпрацьованих годин (ціле число)\n");
	printf("3) погодинну ставку (дійсне число)\n");

	scanf("%s %d %f", &name, &hours, &cost_per_hour);

	printf("\n");
	printf("Працівник %s отримав зарплату: %.2f грн", name, cost_per_hour * hours);    
    
    return 0;
}
