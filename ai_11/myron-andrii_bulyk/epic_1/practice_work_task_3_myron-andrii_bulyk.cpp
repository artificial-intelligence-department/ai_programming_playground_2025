#include <iostream>
#include <iomanip>

using namespace std;
float totalViews(int V0, int p, int t);
int main() {
	int V0, p, t;
	cout << "Enter the initial number of views (V0), the percentage increase per day (p), and the number of days (t): ";
	cin >> V0 >> p >> t;
	float result =totalViews(V0, p, t);
	cout << "Increasing (float): " << fixed << setprecision(2) << result << endl;
	cout << "View forecast in " << t << " days: " << setprecision(0) << result << endl;
	return 0;

}

float totalViews(int V0, int p, int t)
{
	float totalView = V0 * pow(1+ p/100.00,t);
	return totalView;
}
