#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	double A, P, r, n, t;
	setlocale(LC_ALL, "uk_UA.UTF-8");
	printf("Введіть початкову суму:");
	scanf("%lf", &P);
	printf("Введіть відсотки:");
	scanf("%lf", &r);
	printf("Введіть кількість виплат на рік:");
	scanf("%lf", &n);
	printf("Введіть кількість термін(в роках):");
	scanf("%lf", &t);
	A = P * pow(1 + r / (100.0 * n), n * t);
	printf("Кінцева сума депозиту: %lf", A);
	return 0;
}