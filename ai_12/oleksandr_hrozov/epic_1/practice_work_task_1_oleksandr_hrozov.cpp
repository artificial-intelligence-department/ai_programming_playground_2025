#include <iostream>
using namespace std;
int main(){
    cout << "Продаються напої: "<<endl;
    cout<<" 1. Капучіно - 35 грн"<<endl; 
    cout<<" 2.Еспресо - 25 грн "<<endl;
    cout<<" 3.Чай - 20 грн" <<endl;
    cout <<"Введіть 0 для завершення замовлення:";
    
    int napoi;
    int suma=0;
    do {
        cin >> napoi;

        if (napoi == 1) {
            cout<<"Ви вибрали капучіно"<<endl;
            suma += 35;
        }
        else if (napoi == 2) {
            cout<<"Ви вибрали еспресо"<<endl;
            suma += 25;
        }
        else if (napoi == 3) {
            cout<<"Ви вибрали чай"<<endl;
            suma += 20;
        }
        else if (napoi == 0) {
            cout << "До сплати:" << suma << "грн";
        }
        else {
            cout << "Невірний номер напою, спробуйте ще раз";
        }
    } while (napoi != 0);
    return 0;
}