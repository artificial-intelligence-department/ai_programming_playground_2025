#include <iostream>

using namespace std;


int main()
{
    int inputAmountOfViews = 0;
    cout << "Input your start views: ";
    cin >> inputAmountOfViews;
    float percentOfGrow;
    cout << "Input your percent of grow: ";
    cin >> percentOfGrow;
    percentOfGrow /= 100;
    int days;
    cout << "Input how many days to calculate: ";
    cin >> days;

    float result = inputAmountOfViews*pow((1 + percentOfGrow), days);

    cout << result;

}