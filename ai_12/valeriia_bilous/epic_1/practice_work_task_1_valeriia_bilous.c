#include <stdio.h>
#include <math.h>
#include <string.h>


void get_valid_input(const char prompt[], const char *format, void *var);
double calculate_total_investment(double investment_amount, double annual_interest_rate, int number_of_payments, int number_of_years);
void get_valid_input_in_array(const int allowed_numbers[], int *number_to_check, int num_elements, const char prompt[], const char *format);
void get_valid_input_less_than(double to, double *number_to_check, const char prompt[], const char *format);


int main() {

    double investment_amount;
    double annual_interest_rate;
    int number_of_payments;
    int number_of_years;

    int allowed_numbers_of_payments[] = {1, 4, 12};
    int num_elements = sizeof(allowed_numbers_of_payments) / sizeof(allowed_numbers_of_payments[0]);

    get_valid_input("Enter investment amount: ", "%lf", &investment_amount);
    get_valid_input_less_than(1, &annual_interest_rate, "Enter annual interest rate: ", "%lf");
    get_valid_input_in_array(allowed_numbers_of_payments, &number_of_payments, num_elements, "Enter number of payments: ", "%d");
    get_valid_input("Enter number of years: ", "%d", &number_of_years);


    double total_investment = calculate_total_investment(investment_amount, annual_interest_rate, number_of_payments, number_of_years);

    printf("***********************************\n");
    printf("Your investment amount: %.2lf\n", investment_amount);
    printf("Your annual interest rate: %.2lf%%\n", annual_interest_rate * 100);
    printf("Your number of payments: %d\n", number_of_payments);
    printf("Your number of years: %d\n", number_of_years);
    printf("Your total investment: %.2lf\n", total_investment);
    printf("Your earnings: %.2lf\n", total_investment - investment_amount);

}


void get_valid_input_less_than(double max_value, double *number_to_check, const char prompt[], const char *format) {

    int marker;

    do {

        marker = 0;
        get_valid_input(prompt, format, number_to_check);

        if (*(double *)number_to_check > max_value) {

            printf("The number must be between 0.00 and %.2lf. Try again.\n", max_value);
            marker = 1;
        }
        

    } while(marker);

}


void get_valid_input_in_array(const int allowed_numbers[], int *number_to_check, int num_elements, const char prompt[], const char *format) {

    int marker;

    do {
        marker = 0;

        get_valid_input(prompt, format, number_to_check);

        for (int i = 0; i < num_elements; i++) {
            if (allowed_numbers[i] == *(int *)number_to_check) {
                return;
            }
        }

        printf("The number of payments must be one of these: [");
        for (int i = 0; i < num_elements; i++) {
            printf("%d", allowed_numbers[i]);
            if (i < num_elements - 1) {
                printf(", ");
            }
        }
        printf("]. Try again.\n");
        marker = 1;
    } while(marker);

}


double calculate_total_investment(double investment_amount, double annual_interest_rate, int number_of_payments, int number_of_years) {
    double base = 1 + annual_interest_rate / number_of_payments;
    double exponent = number_of_payments * number_of_years;
    return investment_amount * pow(base, exponent);
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
            while (getchar() != '\n'); // flush invalid input

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
