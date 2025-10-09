#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long long input_views;
    float increasement;
    int time;
    double future_views;

    cout << "Enter input_views, increasement, time: ";

    cin >> input_views >> increasement >> time;
    
    future_views = input_views * pow((1 + increasement / 100), time);

    cout << "Future views after: " << time << " days: " << fixed << setprecision(2) << future_views << endl;

    return 0;
}