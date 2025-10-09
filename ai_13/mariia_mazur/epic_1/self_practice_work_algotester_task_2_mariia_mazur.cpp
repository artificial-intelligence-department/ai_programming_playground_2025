#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float L, W, U, D;
    cin >> L >> W >> U >> D ;
    if (W>=L && U+D>=L){
        cout << "Three times Sex on the Beach, please!";
    }
    else{
        cout << "Forget about the cocktails, man!";  
    }
    return 0;
}