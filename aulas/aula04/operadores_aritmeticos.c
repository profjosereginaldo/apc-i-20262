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
    int soma = numero1 + numero2; 
    int diferenca = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    int divisao = numero1 / numero2;
    int resto = numero1 % numero2;
    float decimal = numero1 * 1.0f / numero2;

    // em uma expressao com + - * e / a preferencia eh * / depois + -
    int expressao1 = numero1 * numero2 + numero1 / numero2 - numero1;
    // em uma expressao o () tem preferencia
    int expressao2 = numero1 * (numero2 + numero1) / (numero2 - numero1);
    
    //incremento ++ = aumenta de 1 e decremento -- = diminui de 1
    int pre_incremento = numero1;
    int pos_incremento = numero1;
    int pre_decremento = numero1;
    int pos_decremento = numero1;

    // saida
    printf("%i + %i = %i\n", numero1, numero2, soma);
    printf("%i - %i = %i\n", numero1, numero2, diferenca);
    printf("%i x %i = %i\n", numero1, numero2, multiplicacao);
    printf("%i / %i = %i\n", numero1, numero2, divisao);
    printf("%i %% %i = %i\n", numero1, numero2, resto);
    printf("%i * 1.0f / %i = %f\n", numero1, numero2, decimal);
    printf("o valor da expressao %i x %i + %i / %i - %i = %i\n", numero1, numero2, numero1, numero2, numero1, expressao1);   
    printf("o valor da expressao %i x (%i + %i) / (%i - %i) = %i\n", numero1, numero2, numero1, numero2, numero1, expressao2);
    printf("++%i = %i\n", numero1, ++pre_incremento);
    printf("%i++ = %i (depois %i)\n", numero1, pre_incremento++, pre_incremento);
    printf("--%i = %i\n", numero1, --pre_decremento);
    printf("%i-- = %i (depois %i)\n", numero1, pre_decremento--, pre_decremento);
    return 0;
}