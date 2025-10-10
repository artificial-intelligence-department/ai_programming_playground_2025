#include <iostream>
using namespace std;
int main ()
{   
    int c=0, d[8],a;
    d[0]=500,d[1]=200;d[2]=100;d[3]=50;d[4]=20;d[5]=10;d[6]=5;d[7]=2;d[8]=1;
    cin>> a;
 while(a>=d[0])
 {
    a=a-d[0];
    c++;
 }
  while(a>=d[1])
 {
    a=a-d[1];
    c++;
 }
  while(a>=d[2])
 {
    a=a-d[2];
    c++;
 }
  while(a>=d[3])
 {
    a=a-d[3];
    c++;
 }
  while(a>=d[4])
 {
    a=a-d[4];
    c++;
 }
  while(a>=d[5])
 {
    a=a-d[5];
    c++;
 }
  while(a>=d[6])
 {
    a=a-d[6];
    c++;
 }
  while(a>=d[7])
 {
    a=a-d[7];
    c++;
 }
  while(a>=d[8])
 {
    a=a-d[8];
    c++;
 }
    cout<<c;
    return 0;
}