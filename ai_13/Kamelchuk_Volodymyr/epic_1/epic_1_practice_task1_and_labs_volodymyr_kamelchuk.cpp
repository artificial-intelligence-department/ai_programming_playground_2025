#include <iostream>
using namespace std;
int main() {
    
    string name;
    cout << "Enter employe name :" ;
    cin >> name;
        
    int h;
    float perh;
     cout << "Enter hours namber :";
     cin >> h;

     cout << "Enter salary per hour :";
     cin >> perh;

    float slry;
    slry = h * perh;
    cout << "Employe " << name << " earn " <<slry;
    return 0;
}