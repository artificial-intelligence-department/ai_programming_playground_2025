#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "uk_UA.UTF-8");
    int a;
    float p;
    string s1;
    cout<<"Введіть ім'я працівника"<<endl;
    getline(cin, s1);
    cout<<"Введіть кількість відпрацьованих годин"<<endl;
    cin>> a;
    cout <<"Введіть погодинну ставку"<<endl;
    cin >> p;
    float P=a*p;
    cout << fixed << setprecision(2);
    cout << "Працівник " << s1 << " отримав зарплату: " << P << " грн" << endl;
    return 0;
}