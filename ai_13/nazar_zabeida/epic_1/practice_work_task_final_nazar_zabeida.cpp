#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, p, r, n, t;
    
	printf("Обчислення складних відсотків за депозитом\n\n");

	printf("Введіть суму інвестиції: ");
	scanf("%f", &p);
	printf("Введіть річну процентну ставку (у десятковій формі): ");
	scanf("%f", &r);
	printf("Введіть кількість нарахувань відсотків на рік: ");
	scanf("%f", &n);
	printf("Введіть час, на який гроші інвестуються, у роках: ");
	scanf("%f", &t);

	a = p * pow(1 + r / n, n * t);
    
	printf("\n");
	printf("Вкладені кошти: %.2f\n", p);
	printf("Загальна сума інвестиції: %.2f\n", a);
	printf("Сума заробітку: %.2f\n", a - p);
    
    return 0;
}
