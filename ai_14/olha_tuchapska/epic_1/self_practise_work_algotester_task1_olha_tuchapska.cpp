#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int S1 = a + b, S2 = a + c, S3 = b + c;
    if (S1 < S2 && S1 < S3){
        cout << S1 << endl;
    }
    else if (S2 < S1 && S2 < S3){
        cout << S2 << endl;
    }
    else {
        cout << S3 << endl;
    }
    

    return 0;
}
