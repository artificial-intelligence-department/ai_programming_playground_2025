#include <iostream>
#include <cmath>


int main() {
    int v0 , t; 
    float p;
    double v;
    
    printf ("Enter number of views in first day: ") ;
    scanf ("%d", &v0);

    printf ("Enter increasing index: ");
    scanf ("%f", &p);

    p = p/100;
    
    printf ("Enter time: ");
    scanf ("%d", &t);
    
    v = v0 * (pow( 1 + p , t ));
    
    std::cout << "Increasing: "<< v << std::endl;
    printf ( "Expecting number of viewing: %d\n", (int)round(v));
    return 0;
}