#include <stdio.h>

int main() {

    // funcao para escrever algo na tela
    printf("C é muito legal!\n\n");
    printf("Vamos codar\n");
    
    // "" eh texto (string) '' eh caracter
    printf("A terceira letra do alfabeto eh %c e a ultima eh %c\n", 'c', 'z'); 
    printf("Ola, %s!\n", "Jose");

    printf("================================\n");
    printf("      NOTA LEGAL\n");
    printf("================================\n");
    printf("Item        Unid   Preco   Valor\n");
    printf("Caneta         1    1,00    1,00\n");
    printf("Borracha       1    5,00    5,00\n");
    printf("Lapis          2    2,50    5,00\n");
    printf("--------------------------------\n");
    printf("TOTAL: R$ 11,00\n");
    printf("--------------------------------\n");

    return 0;
}