#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int start , percentage , days;
    cout << "Введіть початкові перегляди: ";
    cin >> start;
    cout << "Введіть приріст у відсотках: ";
    cin >> percentage;
    cout << "Введіть кількість днів: ";
    cin >> days;
    cout << "Прогноз переглядів через " << days << " днів: " << (int)(start*pow((1+(double)percentage/100),days));
    return 0;
}