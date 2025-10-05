#include <cstdio>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <cmath>

int main(){
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);

    int views;
    int increase;
    int days;
    double projecion;

    wprintf(L"Перегляди, зростання, дні: ");
    wscanf(L"%d %d %d", &views, &increase, &days);

    projecion = views * pow(1 + double(increase)/100, days);
    wprintf(L"Views: %d, Increase: %d, Days: %d\n", views, increase, days);

    wprintf(L"Зростання (float): %.2lf\n", projecion);
    wprintf(L"Прогноз переглядів через %d днів: %.0lf", days, projecion);

    return 0;
}
