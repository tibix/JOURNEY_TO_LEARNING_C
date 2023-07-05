#include <stdio.h>

int main()
{
    // specificator de format % = defineste si formateaza tipul de date ce va fi afisat
    // %c = caracter
    // %s = sir de caractere
    // %f = numar flotant
    // %lf = numar flotant cu precizie dubla
    // %d = numar intreg
    // %u = numar intreg fara semn

    // %.1 = precizie de 1
    // %1 = lungimea minima a campului
    // %- = aliniere la stanga

    float item1 = 5.75;
    float item2 = 12.99;
    float item3 = 100.99;

    printf("Item 1 : %-8.2f\n", item1);
    printf("Item 2 : %-8.2f\n", item2);
    printf("Item 3 : %-8.2f\n", item3);

    return 0;
}