#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double views;
    cout << "Enter number of views at the beginning: ";
    cin >> views;

    double percentage;
    cout << "Enter percentage of views increase: ";
    cin >> percentage;

    double days;
    cout << "Enter number of days for prediction: ";
    cin >> days;

    double prediction;
    prediction = views * pow(1+(percentage/100), days);

    cout << "Predicted views after " << days << " days, with " << views << " views at start, with " << percentage << "% increase is: " << prediction;
    

    return 0;
}