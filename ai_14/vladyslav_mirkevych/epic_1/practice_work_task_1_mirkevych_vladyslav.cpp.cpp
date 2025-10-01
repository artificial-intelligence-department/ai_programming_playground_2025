#include <iostream>
#include <cmath>
using namespace std ;
int main()
{  int n,t,choice;
    double P,r;
    cin >> P >> n >> r >> t >> choice;
    double A=P*(pow(1+r/(double) n,n*t));
    cout << "Початковий вклад-" << P<< "\n"<<"Сума заробітку-"<< A-P<<" " <<"\n"<< "Загальна сума інвестиції-"<<A;
    switch (choice) {
    case 1:
        n = 12;
        break;
    case 2:
        n = 4;
        break;
    case 3:
        n = 1;  
        break;
    default:
        cout << "Невірний вибір\n";
        return 1;
}
}

