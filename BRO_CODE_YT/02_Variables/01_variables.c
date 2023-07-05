#include <stdio.h>

int main() {

    // variabila = spatiu alocat in memorie pentru a stoca o valoare
    //             Facem referinta la numele variabilei cand dorim sa ii accesam valoarea
    //             Trebuie sa declaram tipul de data continut in variabila

    int numar_intreg; // declararea variabilei
    numar_intreg = 7; // initializarea variabilei

    int alt_numar_intreg = 37; // declararea si initializarea variabilei

    int varsta = 38;          // intreg - la afisare folosim %d
    float media = 2.05;       // flotant - la afisare folosim %f
    char nota_muzicala = 'C'; // un singur caracter - la afisare folosim %c sau %d (in cazul in care vrem sa obtinem codul ASCII)
    char nume[] = "Tiberiu";  // sir de caractere - la afisare folosim %s

    printf("Salut, %s!\n", nume); // %s = string (sir de caractere)
    printf("Varsta ta este de %d ani.\n", varsta);
    printf("Nota muzicala favorita este %c!\n", nota_muzicala);
    printf("Media ta este %f\n", media);


    return 0;
}