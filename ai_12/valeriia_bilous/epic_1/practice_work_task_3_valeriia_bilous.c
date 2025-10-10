#include <stdio.h>
#include <math.h>

void get_valid_input(const char prompt[], const char *format, void *var);
double calculate_expected_views(int intial_views, double percent, int days);

int main() {

    int intial_views;
    double percent;
    int days;

    get_valid_input("Enter the intial number of views: ", "%d", &intial_views);
    get_valid_input("Enter the percent the views are growing by: ", "%lf", &percent);
    get_valid_input("Enter the number of days: ", "%d", &days);

    double expected_views = calculate_expected_views(intial_views, percent, days);
    printf("Views increase: %.2lf\n", expected_views);
    printf("Expected views in %d days: %d\n", days, (int) round(expected_views));

}

double calculate_expected_views(int intial_views, double percent, int days) {
    double base = 1 + percent/100;
    return intial_views * pow(base, days);
}

void get_valid_input(const char prompt[], const char *format, void *var) {
    int result;
    char extra;
    int marker;

    do {
        marker = 0;

        printf("%s", prompt);
        result = scanf(format, var);

        if (result != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            marker = 1;
            while (getchar() != '\n');

        } else if (format == "%d" && *(int *)var <= 0) {
            printf("Value must be greater than 0.\n");
            marker = 1;
            while (getchar() != '\n');

        } else if (format == "%lf" && *(double *)var <= 0) {
            printf("Value must be greater than 0.\n");
            marker = 1;
            while (getchar() != '\n');
        
        } else if (scanf("%c", &extra) == 1 && extra != '\n') {
            printf("Invalid input. Please enter a valid number.\n");
            marker = 1;
            while (getchar() != '\n');
        }

    } while(marker);

}
