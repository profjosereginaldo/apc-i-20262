#include <stdio.h>

int main() {
    float notas[5][4]; // 5 linhas x 4 colunas

    for(int i=0; i < 5; i++) { // andei nas linhas
      for(int j=0; j < 4; j++) { // andei nas colunas
        printf("Informe o valor da nota[%i, %i]: ", i, j);
        scanf("%f", &notas[i][j]);
      }
    }

    printf("As minhas notas foram: \n");
    for(int i=0; i < 5; i++) { // andei nas linhas
      for(int j=0; j < 4; j++) { // andei nas colunas
        printf("|%5.1f|", notas[i][j]);
      }
      printf("\n");
    }

    return 0;
}