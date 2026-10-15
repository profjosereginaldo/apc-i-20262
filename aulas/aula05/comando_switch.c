#include <stdio.h>

int main() {
    int nota;

    printf("Entre com a nota de 1 a 5: ");
    scanf("%i", &nota);

    if (nota == 1) {
        printf("Ganhou *\n");
    } else if (nota == 2) {
        printf("Ganhou **\n");
    } else if (nota == 3) {
        printf("Ganhou ***\n");
    } else if (nota == 4) {
        printf("Ganhou ****\n");
    } else if (nota == 5) {
        printf("Ganhou *****\n");
    } else {
        printf("Nota invalida. Tente de novo!\n");
    }

    /*
      sintaxe switch
    */
    
    switch(nota) {
        case 1: printf("Ganhou *\n"); break;
        case 2: printf("Ganhou **\n"); break;
        case 3: printf("Ganhou ***\n"); break;
        case 4: printf("Ganhou ****\n"); break;
        case 5: printf("Ganhou *****\n"); break;
        default: printf("Nota invalida. Tente de novo!\n");
    }

    return 0;
}