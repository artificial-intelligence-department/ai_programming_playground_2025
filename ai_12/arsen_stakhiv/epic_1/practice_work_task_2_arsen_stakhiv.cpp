#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 20

int main(void) {
	char name[MAX_NAME_LEN];
	int hours;
	double hourly_rate, salary;

	printf("Enter worker's name, hours worked and hourly rate: ");
	scanf("%s %d %lf", name, &hours, &hourly_rate);

	if (hours <= 0) {
		fprintf(stderr, "Hours must be positive\n");
		exit(EXIT_FAILURE);
	}

	if (hourly_rate <= 0) {
		fprintf(stderr, "Hourly rate must be positive\n");
		exit(EXIT_FAILURE);
	}

	salary = hours * hourly_rate;

	printf("%s reveived a salary: %.2lf UAH\n", name, salary);

	return 0;
}
