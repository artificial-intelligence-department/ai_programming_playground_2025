#include <cstdio>
#include <iostream>
#include <io.h>
#include <fcntl.h>

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);

    wchar_t name[50];
    int hours;
    double wage;
    double paycheck;

    wprintf(L"Ім'я, години, зарплата: ");
    wscanf(L"%49ls %d %lf", name, &hours, &wage);

    paycheck = wage * hours;

    wprintf(L"Працівник %ls отримав зарплату %.2f грн\n", name, paycheck);

    return 0;
}