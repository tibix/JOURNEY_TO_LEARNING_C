#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    // Circumferinta cercului este 2*PI*r
    int raza;
    double circumferinta;
    printf("\nCare este raza cercului? ");
    scanf("%d", &raza);
    circumferinta = 2*PI*raza;

    printf("Pentru cercul cu raza = %d, circumferinta este de %f!\n", raza, circumferinta);
}