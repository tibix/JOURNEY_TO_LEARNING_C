#include <stdio.h>

int main()
{
    // switch = o alternativa mai eficienta pentru testarea unei conditii care poate lua mai multe valori
    //          Poate testa mai multe cazuri fara a scrie mai multe else if-uri

    char nota;

    printf("\nIntrodu calificativul: ");
    scanf("%c", &nota);

    switch(nota) {
        case 'A':
            printf("Excelent!\n");
            break;
        case 'B':
            printf("Foarte bine!\n");
            break;
        case 'C':
            printf("Bine!\n");
            break;
        case 'D':
            printf("Satisfacator!\n");
            break;
        case 'F':
            printf("Ai picat!\n");
            break;
        default:
            printf("Calificativ invalid!\n");
    }


    return 0;
}