#include <stdio.h>
#include <string.h>

int main(){

    char nume[25];
    printf("\nCum te numesti? ");
    //scanf("%s", &nume);
    fgets(nume, 25, stdin);
    nume[strlen(nume)-1] = '\0';

    int varsta;
    printf("\nCe varsata ai? ");
    scanf("%d", &varsta);

    printf("Salut %s!\n", nume);
    printf("Varsta ta este de %d de ani!\n", varsta);

    return 0;
}