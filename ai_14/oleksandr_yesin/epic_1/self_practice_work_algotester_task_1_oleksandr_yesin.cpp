#include <iostream>

using namespace std;

int main()
{
	int n, count = 1;
	cin >> n;

	long num, smallest;

	cin >> smallest;

	for (int i = 0; i < n-1; i++) {
		cin >> num;
		if (num <= smallest) {
			smallest = num;
			count++;
		}
	}

	cout << count;

	return 0;
}
