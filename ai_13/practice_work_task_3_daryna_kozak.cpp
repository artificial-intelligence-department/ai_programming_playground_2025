#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
 
  int sum;
  printf("������ ��������� ���� ���������:\n");
  scanf_s("%d", &sum);



  float percent;
  printf("������ ���� ��������� ������ ���������:\n");
  scanf_s("%f", &percent);


  int number;
  printf("������ ������� ���������� ������� �� ��:\n");
  scanf_s("%d", &number);

  int  years;
  printf("������ ��� , �� ���� ����� ������������, � �����:\n");
  scanf_s("%d", &years);

  float result = sum * pow((1 + (percent / 100) / number), number * years);
  printf("�������� ���� ����� %d ����: %.f\n", years, result);


  return 0;
}