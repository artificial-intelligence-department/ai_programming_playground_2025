#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
    string name;
    int hours;
    double rate;
	cout <<  "������ ��'� ����������, ������� ������������� ����� �� ��������� ������: ";
    cin >> name >> hours >> rate;


    double salary = hours * rate;

    cout << "��������� " << name << " ������� ��������: ";
    cout << fixed << setprecision(2) << salary << " ���" << endl;

    return 0;
}