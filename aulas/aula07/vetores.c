#include <stdio.h>

int main() {
    int numeros[10]; // conjunto de 10 inteiros

    numeros[0] = 5;
    numeros[1] = 2;
    numeros[2] = 10;
    numeros[3] = 8;
    numeros[4] = 7;
    numeros[5] = 6;
    numeros[6] = 1;
    numeros[7] = 3;
    numeros[8] = 4;
    numeros[9] = 9;

    for(int i = 0; i < 10; i++) {
        printf("Entre com o %io numero: ", i+1);
        scanf("%i", &numeros[i]);
    }

    int soma = 0;

    for(int i = 0; i < 10; i++) {
        soma = soma + numeros[i];
        printf("%i, ", numeros[i]);
    }
    printf("\n");

    int media = soma / 10;

    printf("A soma dos números eh %i\n", soma);
    printf("A media dos números eh %i\n", media);
    
    return 0;
}