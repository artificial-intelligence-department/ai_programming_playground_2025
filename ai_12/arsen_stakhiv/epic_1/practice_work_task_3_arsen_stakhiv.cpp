#include <stdio.h>
#include <math.h>

int main(void) {
	int V0, t;
	float p;
	float estimate;

	printf("Enter initial amount of views, percentage of increase and time in days: ");
	scanf("%d %f %d", &V0, &p, &t);

	if (V0 <= 0) {
		fprintf(stderr, "Initial amount of views must be positive\n");
		exit(EXIT_FAILURE);
	}

	if (p < 0) {
		fprintf(stderr, "Percentage increase must not be negative\n");
		exit(EXIT_FAILURE);
	}

	if (t <= 0) {
		fprintf(stderr, "Time must be positive\n");
		exit(EXIT_FAILURE);
	}

	estimate = V0 * pow(1 + (p / 100.0), t);
	printf("Increase (float): %.2f\n", round(estimate * 100) / 100);
	printf("The estimate amount of views in %d day(s): %d\n", t, (int) round(estimate));

	return 0;
}
