#include <cstdio>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <cmath>

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);

    int views;
    int increase;
    int days;
    long double projection;

    wprintf(L"Перегляди, зростання (%%), дні: ");
    wscanf(L"%d %d %d", &views, &increase, &days);

    projection = views * pow(1 + (long double)increase / 100.0, days);

    wprintf(L"\nПерегляди: %d, Зростання: %d%%, Дні: %d\n", views, increase, days);
    wprintf(L"Прогноз переглядів через %d днів: %.0Lf\n", days, projection);
    wprintf(L"Зростання (float): %.2Lf\n", projection);

    return 0;
}
