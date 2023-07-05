#include <stdio.h>

int main()
{
    int varsta;

    printf("\nIntrodu varsta: ");
    scanf("%d", &varsta);

    if(varsta >= 18) {
        printf("Te poti inregistra!\n");
    }
    else if(varsta == 0){
        printf("Nu te poti inregstira ca un nou-nascut!\n");
    }
    else if(varsta < 0) {
        printf("Inca nu te-ai nascut!\n");
    }
    else {
        printf("Esti prea tinar sa te poti inregistra!\n");
    }

    return 0;
}