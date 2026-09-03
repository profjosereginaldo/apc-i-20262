#include <stdio.h>

int main() {
    /* tipos de dados
    char - um caracter
    int - um inteiro -, 0 ou +
    float - um decimal com 6 casas
    double - um decimal com 12 casas
    void - sem tipo
    */

    // declara de variaveis
    char letra;
    int numero_inteiro;
    float media_final;
    double exponencial;

    // atribuir valor a uma variavel
    letra = 'A';
    numero_inteiro = 10;
    media_final = 9.5f;
    exponencial = 9.123456789012345;

    printf("o valor de letra = %c\n", letra);
    printf("o valor de numero_inteiro = %i\n", numero_inteiro);
    printf("o valor de media_final = %.1f\n", media_final);
    printf("o valor de exponencial = %.15f\n", exponencial);

    // variavel pode mudar de valor
    letra = 'B';

    // escopo = um subprograma
    {
        char letra= 'C';
        int variavel = 1;
    }

    // variavel = 10; a variavel não existe mais

    return 0;
}