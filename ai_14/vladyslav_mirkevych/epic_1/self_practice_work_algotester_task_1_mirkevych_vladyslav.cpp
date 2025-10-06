#include <iostream>
#include <cmath>
#include <vector>
using namespace std ;
int main()  
{   int n;
    cin >> n;
    vector <int> a(n); // масив а який містить n цілих чисел
    for (int x = 0; x < n; x ++)
    {   
        cin >> a[x];
    }
    vector<int> d(n,1); // масив що буде містити всі одиниці довжиною n і буде змінюватись зі збільшенням значення "і"

    int answer = 0;
    for (int i = 0 ;i < n; i++) 
    {
        for (int j = 0; j < i; j++)
        {   if(a[j] < a[i])
            {   d[i] = max(d[i],d[j] + 1); 
                                                

            }
    
        }
        answer = max(answer,d[i]);
    }
    cout << answer << endl;   
}
