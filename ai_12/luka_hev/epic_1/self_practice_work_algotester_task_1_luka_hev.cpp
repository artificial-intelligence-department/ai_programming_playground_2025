//002 Найбільша зростаюча підпослідовність
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int list[105];       
    int endOfTheList[105];      

    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    int maxLengthForTheList = 1;
    for (int i = 0; i < n; i++) {
        endOfTheList[i] = 1;
        for (int j = 0; j < i; j++) {
            if (list[j] < list[i] && endOfTheList[j] + 1 > endOfTheList[i]) {
                endOfTheList[i] = endOfTheList[j] + 1;
            }
        }
        if (endOfTheList[i] > maxLengthForTheList) maxLengthForTheList = endOfTheList[i];
    }

    cout << maxLengthForTheList << "\n";
    return 0;
}
