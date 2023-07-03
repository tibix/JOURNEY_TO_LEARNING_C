#include <stdio.h>

int main()
{
    // constante = o valoare fixa care nu poate fii modificata de program in timpul executiei
    const float PI = 3.14159;

    // PI = 430.21; // aici se va genera o eroarea de oarece o constanta nu poate fii modificata

    printf("%f \n", PI);

    return 0;
}