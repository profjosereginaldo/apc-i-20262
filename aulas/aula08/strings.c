#include <stdio.h>
#include <string.h>

int main() {
    char vetor[13];

    vetor[0] = 'E';
    vetor[1] = 'u';
    vetor[2] = ' ';
    vetor[3] = 'g';
    vetor[4] = 'o';
    vetor[5] = 's';
    vetor[6] = 't';
    vetor[7] = 'o';
    vetor[8] = ' ';
    vetor[9] = 'd';
    vetor[10] = 'o';
    vetor[11] = ' ';
    vetor[12] = 'C';

    for(int i = 0; i < 13; i++) {
        printf("%c", vetor[i]);
    }
    printf("\n");

    printf("%s\n", vetor);

    // NAUM PODE!
    // vetor = "Eu gosto de C";   
    // vetor = "Eu gosto de " + "C";

    // copiar uma string
    strcpy(vetor, "Bora codar!");
    vetor[12]='\0';  // toda string termina em \0
    for(int i = 0; i < 13; i++) {
        printf("%c", vetor[i]);
    }
    printf("\n");
    printf("%s\n", vetor);

    strcpy(vetor, "Bora ");
    printf("%s\n", vetor);
    //concatenar uma string
    strcat(vetor, "codar!");
    printf("%s\n", vetor);
    // comparar uma string
    printf("banana = BANANA? %i\n", strcmp("banana", "BANANA")); // > 0 ordem crescente
    printf("BANANA = banana? %i\n", strcmp("BANANA", "banana")); // < 0 ordem decrescente
    printf("banana = banana? %i\n", strcmp("banana", "banana")); // = 0 iguais
    // tamanho da string
    printf("banana tem %i caracteres\n", strlen("banana"));
    // procurar um caracter na string
    printf("banana tem a letra 'a'? %s\n", strchr("banana", 'a'));
    printf("banana tem a letra 'e'? %s\n", strchr("banana", 'e'));
    // procurar uma string na string
    printf("banana tem a 'ana'?  %s\n", strstr("banana", "ana"));
    printf("banana tem a 'ama'?  %s\n", strstr("banana", "ama"));
    // preencher uma string com um caracter
    memset(vetor, 'a', 5);
    printf("%s\n", vetor);
    memset(vetor, '\0', sizeof(vetor)); // limpa o vetor
    printf("%s\n", vetor);

    return 0;
}