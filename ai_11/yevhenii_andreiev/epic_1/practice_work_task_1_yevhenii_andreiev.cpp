#include <stdio.h>

int main() {
	char name[20] = {'\0'};
	int working_hours;
	float hourly_rate;
	
	printf("Enter the employee's name, number of hours worked (integer), and hourly rate (real number) separated by a space: ");

	scanf("%s %d %f", name, &working_hours, &hourly_rate);
	float salary = (float) working_hours * hourly_rate;
	
	printf("Employee %s received salary: %.2f ₴", name, salary);
	
	return 0;
}