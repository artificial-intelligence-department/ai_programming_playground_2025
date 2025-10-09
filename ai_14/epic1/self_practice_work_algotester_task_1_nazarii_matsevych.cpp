#include <iostream>
#include <sstream>
using namespace std;
int main(){
 double sum=0;
double num=0;
int max;
int a;
cin >> num;
cin >> a;
max=a;
sum+=1;
for(int i=0; i<num-1;i++){
cin >> a;
if (a<=max){
    max=a;
    sum+=1;
}
}
 cout<<sum;
 return 0;
}