#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "uk_UA.UTF-8");
    setlocale(LC_ALL, "uk_UA");

    string name;
    int hours;
    float s, sum;
    
    cin >> name;
    cin >> hours >> s;
    
    sum = hours * s;
    cout << "Працівник " << name << " " << "отримав зарплату: ";
    printf("%.2f", sum);
    return 0;
}