#include <stdio.h>
#include <math.h>

int main() {

    double A,B,C;
    
    printf("\nCateta 1: ");
    scanf("%lf", &A);

    printf("\nCateta 2: ");
    scanf("%ld", &B);

    C = sqrt(A*A + B*B);

    printf("Pentru triunghiul cu catetele %lf si %lf, ipotenuza este %lf\n", A, B, C);


    return 0;
}