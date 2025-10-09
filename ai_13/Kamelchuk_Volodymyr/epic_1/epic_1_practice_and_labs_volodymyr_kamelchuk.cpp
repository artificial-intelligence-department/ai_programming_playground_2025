#include <iostream>
#include <cmath>


int main() {
    int p , n , t;
    float A , r ;
    
    printf ("Enter main investment sum:") ;
    scanf ("%d", &p);

    printf ("Enter APY:") ;
    scanf ("%f", &r);
    r = r/100;

    printf ("Enter number of intrest payments per year:") ;
    scanf ("%d", &n);
    
    printf ("Enter time of investment:") ;
    scanf ("%d", &t);
    A = p * (pow( 1 + r / n , n * t ));
    std::cout << "Your result "<< A;
    return 0;
}