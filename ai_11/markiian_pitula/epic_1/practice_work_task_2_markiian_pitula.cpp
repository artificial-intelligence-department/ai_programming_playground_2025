#include<cstdio>
#include<cmath>
using namespace std;
int main(){
int v;
   scanf("%d",&v);
int p;
   scanf("%d",&p);
int t;
   scanf("%d",&t);
float V = v * pow((1 + p / 100.0f), t);
   printf("Зростання %.2f\n",V);
   printf("Прогноз переглядів через %d днів: %.0f\n",t,V);
    return 0;
}