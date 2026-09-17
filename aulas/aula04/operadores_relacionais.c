#include <stdio.h>

int main() {
    // entrada
    int numero1;
    int numero2;

    printf("Entre com um numero inteiro: ");
    scanf("%i", &numero1); 

    printf("Entre com outro numero inteiro: ");
    scanf("%i", &numero2); 

    // processamento
    int maior_que = numero1 > numero2;
    int maior_igual = numero1 >= numero2;
    int menor_que = numero1 < numero2;
    int menor_igual = numero1 <= numero2;
    int igual_a = numero1 == numero2;
    int diferente_de = numero1 != numero2;

    // saida
    printf("%i > %i = %i\n", numero1, numero2, maior_que);
    printf("%i >= %i = %i\n", numero1, numero2, maior_igual);
    printf("%i < %i = %i\n", numero1, numero2, menor_que);
    printf("%i <= %i = %i\n", numero1, numero2, menor_igual);
    printf("%i == %i = %i\n", numero1, numero2, igual_a);
    printf("%i != %i = %i\n", numero1, numero2, diferente_de);

    return 0;
}