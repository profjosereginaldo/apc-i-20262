#include <stdio.h>

int main() {
    char tecla;
    
    printf("pressione uma tecla e depois ENTER\n");
    
    // leitura de valores
    scanf("%c", &tecla);

    printf("voce informou a tecla %c\n", tecla);

    return 0;
}