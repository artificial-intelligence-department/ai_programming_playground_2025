#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
float totalViews(int V0, int p, int t);
int main() {
	SetConsoleOutputCP(1251);
	int V0, p, t;
	cout << "������ ��������� ������� ��������� (V0), ������� ��������� � ���� (p) �� ������� ��� (t): ";
	cin >> V0 >> p >> t;
	float result =totalViews(V0, p, t);
	cout << "��������� (float): " << fixed << setprecision(2) << result << endl;
	cout << "������� ��������� ����� " << t << " ���: " << setprecision(0) << result << endl;
	return 0;

}

float totalViews(int V0, int p, int t)
{
	float totalView = V0 * pow(1+ p/100.00,t);
	return totalView;
}
