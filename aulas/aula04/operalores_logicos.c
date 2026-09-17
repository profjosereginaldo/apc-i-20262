#include <stdio.h>

int main() {
    // entrada
    int numero;

    printf("Entre com um numero entre 1 e 10: ");
    scanf("%i", &numero); 

    // processamento
    // 1 < numero < 10
    int numero_maior_que_zero = numero > 0;
    int numero_menor_que_onze = numero < 11;
    int numero_maior_que_zero_E_numero_menor_que_onze = numero_maior_que_zero && numero_menor_que_onze;
    int numero_maior_que_zero_OU_numero_menor_que_onze = numero_maior_que_zero || numero_menor_que_onze; 
    int NAO_EH_numero_maior_que_zero = !numero_maior_que_zero;

    // saida
    printf("0 < %i < 11 = %i\n", numero, numero, numero_maior_que_zero_E_numero_menor_que_onze);
    printf("0 < %i || %i < 11 = %i\n", numero, numero, numero_maior_que_zero_OU_numero_menor_que_onze);
    printf("NAO (0 < %i) = %i\n", numero, NAO_EH_numero_maior_que_zero); 

    return 0;
}