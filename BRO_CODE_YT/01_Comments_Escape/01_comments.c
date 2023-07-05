// comentariile sunt text care sunt ignorate de compilator
// incep cu // pentru comentariile pe o singura linie si cu 
// /* pentru comentariile care se intind pe mai multe linii

// exemplu
#include <stdio.h>

void salut_lume() {
    // aceasta functie va returna textul "Salut Lume!"
    printf("Salut Lume!");
}

int main() {
    /*
        Facem un apel la functia salut_lume()
        pentru a afisa textul continut
    */
    salut_lume();
    
    return 0;
}