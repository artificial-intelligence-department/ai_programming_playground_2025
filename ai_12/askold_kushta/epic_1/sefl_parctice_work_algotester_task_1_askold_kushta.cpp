#include <iostream>

using namespace std;

int main(){

    int n=0;
    long long m=0;
    long long sum=0;

    cin >> n;

     if(n<0){
      cout << "Неправильні введені дані" << endl;
      return 1;
    }

    for (int i=0; i<n; i++){
        cin >> m;

        if(m<0){
        cout << "Неправильні введені дані" << endl;
        return 1;
        }

        if (m!=0) sum+=m-1;
    }

    cout << sum << endl;

    return 0;
}
