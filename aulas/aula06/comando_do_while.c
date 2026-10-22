#include <stdio.h>

int main() {
    int numero = 0;

    /*
      comando do_while = repente sempre 1 vez no minimo
      do {
          faz_algo;
      } while(codicao_eh_verdadeira);
    */
    do {
      printf("Entre com um numero de 1 a 10:\n");
      scanf("%i", &numero);
      while(getchar() != '\n');
    } while(numero < 1 || numero > 10);

    printf("A tabuada de multiplicacao de %i\n", numero);
    int i = 1;
    do {
        printf("%i x %i = %i\n", i, numero, i * numero);
        i++;
    } while (i <= 10);

    return 0;
}