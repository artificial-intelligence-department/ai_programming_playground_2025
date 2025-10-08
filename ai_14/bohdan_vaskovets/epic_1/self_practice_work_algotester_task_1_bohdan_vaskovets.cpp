#include <iostream>
#include <vector>
using namespace std;

int main(){
int n=0; //ціна подарунку
vector <int> typeUAH = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int total=0; //рахує загальну кількість купюр
cin >> n;

 for (int UAH : typeUAH){
   int counter = n/UAH; 
   n%=UAH;  
   if (counter>0){
    total += counter;
   }
 }
cout << total; 
return 0;
}