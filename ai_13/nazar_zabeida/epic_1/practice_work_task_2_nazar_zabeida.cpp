#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int v, p, t;
	float res;
    
	printf("Прогноз переглядів відео\n\n");

	printf("Введіть через пробіл:\n");
	printf("1) початкову кількість переглядів\n");
	printf("2) відсоток на який щодня зростає кількість переглядів\n");
	printf("3) кількість днів\n");

	scanf("%d %d %d", &v, &p, &t);

	res = v * pow(1 + (float) p / 100, t);

	printf("\n");
	printf("Зростання (float): %.2f\n", res);
	printf("Прогноз переглядів через %d днів: %.0f\n", t, res);
	printf("Збільшення кількості переглядів через %d днів на: %.0f\n", t, res - v);
    
    return 0;
}
