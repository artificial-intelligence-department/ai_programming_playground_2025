#include <cstdio>
#include <cmath>

int main() {
    int investmentTime;
    int depositValue;
    float depositPercent;   
    int paymentsInYear;

    printf("DEPOSIT BANK PROGRAM\n");

    // INVESTMENT TIME INPUT
    while (true) {
        printf("\nFor how long are you investing? (In years): ");
        if (scanf("%d", &investmentTime) != 1) {
            printf("Please, input number, not anything else\n");
            while (getchar() != '\n');
            continue;
        }
        if (investmentTime <= 0) {
            printf("Please, input valid investment time.\n");
            continue;
        }
        break;
    }

    // DEPOSIT VALUE INPUT
    while (true) {
        printf("\nHow much are you investing: ");
        if (scanf("%d", &depositValue) != 1) {
            printf("Please, input number, not anything else\n");
            while (getchar() != '\n');
            continue;
        }
        if (depositValue <= 0) {
            printf("Please, input valid deposit value\n");
            continue;
        }
        break;
    }

    // DEPOSIT PERCENT INPUT
    while (true) {
        printf("\nYour deposit percent (5 for 5%%, etc): ");
        if (scanf("%f", &depositPercent) != 1) {
            printf("Please, input number, not anything else\n");
            while (getchar() != '\n');
            continue;
        }
        if (depositPercent <= 0) {
            printf("Please, input valid deposit percent.\n");
            continue;
        }
        depositPercent /= 100.0;
        break;
    }

    // DEPOSIT OPTION
    while (true) {
        printf("\nDeposit options\n1 - every month, 2 - every quarter, 3 - every year\nOPTION: ");
        int option;
        if (scanf("%d", &option) != 1) {
            printf("Please, input number, not anything else\n");
            while (getchar() != '\n');
            continue;
        }
        if (option == 1) { paymentsInYear = 12; break; }
        if (option == 2) { paymentsInYear = 4; break; }
        if (option == 3) { paymentsInYear = 1; break; }
        printf("Please, choose one of the options (1, 2 or 3)\n");
    }

    float investmentResult = depositValue * pow(1.0 + depositPercent / paymentsInYear, paymentsInYear * investmentTime);

    printf("\nYour investment: %d\n", depositValue);
    printf("Your final sum: %f\n", investmentResult);
    printf("Your earning: %f\n", investmentResult - depositValue);

    return 0;
}
