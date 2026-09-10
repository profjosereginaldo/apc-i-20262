#include <stdio.h>

int main() {
    /*  modificadores de tipo
      unsigned = sem sinal char ou int
      signed = com sinal (+ ou -)

      short = inteiro curto
      long long = inteiro longo ou duplo longo

    */
    long long int inteiro_longo = 100000000000L;
    long double duplo_longo = 5.6546546465465465465L;

    printf ("Numero inteiro longo = %lli", inteiro_longo);
    printf ("Numero duplo longo = %llf", duplo_longo);


    return 0;
}