#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "uk_UA.UTF-8");
    setlocale(LC_ALL, "uk_UA");

    string name;
    int h;
    float s, sum;
    
    getline(cin, name);
    cin >> h >> s;
    
    sum = h*s;
    cout << "Працівник " << name << " " << "отримав зарплату: ";
    printf("%.2f", sum);
    return 0;
}