#include <iostream>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char name[50];
    printf("������ ��'�: ");
    scanf("%49s", name);

    int hours;
    printf("������ ������� �����: ");
    scanf("%d", &hours);

    float rate;
    printf("������ ��������� ������: ");
    scanf("%f", &rate);

    float pay = hours * rate;
    printf("��������� %s ������� ��������:  %.2f\n", name, pay);

    return 0;
}