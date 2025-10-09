#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double A, P, r;
	int n, t;
	printf("Enter the initial sum, yearly rate, number of accruals per year and number of years to invest: ");
	scanf("%lf %lf %d %d", &P, &r, &n, &t);
	
	if (P <= 0) {
		fprintf(stderr, "Input amount must be positive.\n");
		exit(EXIT_FAILURE);
	}

	if (r <= 0) {
		fprintf(stderr, "Rate must be positive.\n");
		exit(EXIT_FAILURE);
	}

	if (n <= 0) {
		fprintf(stderr, "Number of accruals must be positive.\n");
		exit(EXIT_FAILURE);
	}

	if (t <= 0) {
		fprintf(stderr, "Time must be positive.\n");
		exit(EXIT_FAILURE);
	}

	A = P * pow((1 + r / (100.0 * n)), n * t);
	printf("After investing %.2lf UAH for a period of %d year(s) at %.2lf%% yearly "
		   "rate with %d accrual(s) per year, the final sum will be %.2lf UAH with a total profit of %.2lf UAH.\n",
			P, t, r, n, A, A - P);

	return 0;
}
