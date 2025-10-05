// Lab1v1_Algotester

#include <iostream>
using namespace std;

int main(){
    long h, m;
    cin >> h >> m;

    long hi, mi;

    for(int i = 0; i < 3; i++){
        cin >> hi >> mi;
        if(hi>0 && mi>0){
            cout << "NO";
            return 0;
        }else{
            h = h - hi;
            m = m - mi;
            if(h<=0 || m<=0){
                cout << "NO"; 
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}