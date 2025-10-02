#include <iostream>
using namespace std;

int main() {
    double Vzero;
    int Percents;
    int tDays;

    cout << "Write the started number of views: ";
    cin >> Vzero;

    cout << "Write the percentage of views' growing: ";
    cin >> Percents;

    cout << "Write the number of predicted days: ";
    cin >> tDays;

    double rate = 1 + Percents / 100.0;
    for (int i = 0; i < tDays; i++) 
    {
        rate *= rate;
    }

    double Growing = Vzero*rate;
    cout << "Growing: " << Growing << endl;

    int integerValue = (int)(Growing + 0.5);
    cout << "Views prediction in " << tDays << " days: " << integerValue << endl;

    return 0;
}
