#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    #ifdef _WIN32
    system("chcp 65001 > nul");
    #endif

    char workerName[100];
    int hoursWorked;
    float hourlyRate;

    scanf("%99s %d %f", &workerName, &hoursWorked, &hourlyRate);
    
    float salary = hoursWorked * hourlyRate;
    printf("Працівник %s отримав зарплату: %.2f грн", workerName, salary);

    return 0;
}