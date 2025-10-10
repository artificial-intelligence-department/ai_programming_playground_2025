#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
float totalViews(int V0, int p, int t);
int main() {
	SetConsoleOutputCP(1251);
	int V0, p, t;
	cout << "Введіть початкову кількість переглядів (V0), відсоток зростання в день (p) та кількість днів (t): ";
	cin >> V0 >> p >> t;
	float result =totalViews(V0, p, t);
	cout << "Зростання (float): " << fixed << setprecision(2) << result << endl;
	cout << "Прогноз переглядів через " << t << " днів: " << setprecision(0) << result << endl;
	return 0;

}

float totalViews(int V0, int p, int t)
{
	float totalView = V0 * pow(1+ p/100.00,t);
	return totalView;
}
