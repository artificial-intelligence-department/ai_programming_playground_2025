#include <stdio.h>
#include <ctype.h>
#include <string.h>

void get_valid_name(const char prompt[], char *name);
void get_valid_input(const char prompt[], const char *format, void *var);
void name_to_title(char *name);

int main() {

    char employee_first_name[100];
    int hours_worked;
    double hourly_rate;

    get_valid_name("Enter employee name: ", employee_first_name);
    name_to_title(employee_first_name);
    get_valid_input("Enter hours worked: ", "%d", &hours_worked);
    get_valid_input("Enter hourly rate: ", "%lf", &hourly_rate);


    double salary = hours_worked * hourly_rate;
    printf("%s received a salary of %.2lf UAH\n", employee_first_name, salary);

    return 0;

}

void name_to_title(char *name) {
    int size = strlen(name);
    name[0] = toupper(name[0]);
    for (int i = 1; i < size; i++) {
        name[i] = tolower(name[i]);
    }

}

void get_valid_name(const char prompt[], char *name) {
    int marker;
    do {
        marker = 0;
        printf("%s", prompt);
        scanf("%s", name);

        for (int i = 0; i < strlen(name); i++) {
            if (!isalpha((unsigned char)name[i])) {
                printf("Invalid input. Only letters allowed.\n");
                i = strlen(name);
                marker = 1;
            }
        }

        while (getchar() != '\n');
    } while (marker);
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
