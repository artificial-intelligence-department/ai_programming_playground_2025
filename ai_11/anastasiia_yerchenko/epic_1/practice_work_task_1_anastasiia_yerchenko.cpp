#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

int main() {
    float A, E, P, r, t;
    float x, y, z;
    int n;
    char choice;
    printf ("Яка основна сума інвестиції?\n");
    scanf ("%f", &P);
    printf ("Яка річна відсоткова ставка?\n");
    scanf ("%f", &r);
    printf ("Введіть кількість років:\n");
    scanf ("%f", &t);
    printf ("Який варіант виплат оберете?\n");
    printf (" x - кожного місяця\n y - кожного кварталу\n z - кожного року\n");
    scanf(" %c", &choice);
    if (choice == 'x') {
        n = 12;
    } 
    else if (choice == 'y') {
        n = 4;
    }
    else if (choice == 'z') {
        n = 1;
    }
    A = P * pow(1 + (r / 100.0f) / n, n * t);
    E = A - P;
    printf ("\nРeзультат:\n A = %.0f\n", A);
    printf ("Заробіток:\n E = %.0f\n", E);
    printf("\n     Інформація по депозиту \n");
    printf(" -- Початкова сума: %.2f\n", P);
    printf(" -- Річна ставка: %.0f відсотків\n", r);
    printf(" ~ Тривалість: %.0f років\n", t);

return 0;
}
