#include <stdio.h>
#include <stdlib.h>

#define LIMITE 10

int main() {
    int opcao = 0;
    struct AlgumaCoisa {
        int id;
        char nome[101];
    };

    struct AlgumaCoisa lista[LIMITE];
    int contador = 0;

    while (opcao != 6) {
        opcao = 0;
        system("clear");
        printf("+-------------------------+\n");
        printf("| Cadatro de Alguma Coisa |\n");
        printf("+-------------------------+\n");
        printf("MENU PRINCIPAL\n");
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Procurar\n");
        printf("4 - Modificar\n");
        printf("5 - Remover\n");
        printf("6 - Sair\n");
        printf("Sua opcao => ");

        scanf("%i", &opcao);
        while(getchar()!='\n');

        switch(opcao) {
            case 1: {
                if (contador == LIMITE) {
                    printf("Lista cheia! Por favor remova um item.\n");
                    printf("Pressione ENTER para continuar...");
                    while (getchar() != '\n');                
                    break;
                }

                printf("Entre com os dados de Alguma Coisa\n");
                contador++;
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');                
                break;
            }
            case 2: {
                if (contador == 0) {
                    printf("A lista esta vazia!\n");
                    printf("Pressione ENTER para continuar...");
                    while (getchar() != '\n');                
                    break;
                }
                printf("Minha lista de Alguma Coisa\n");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');                
                break;
            }
            case 3: {
                if (contador == 0) {
                    printf("A lista esta vazia!\n");
                    printf("Pressione ENTER para continuar...");
                    while (getchar() != '\n');                
                    break;
                }
                printf("Informe o dado de Alguma Coisa\n");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');                
                break;
            }
            case 4: {
                if (contador == 0) {
                    printf("A lista esta vazia!\n");
                    printf("Pressione ENTER para continuar...");
                    while (getchar() != '\n');                
                    break;
                }

                printf("Informe o dado de Alguma Coisa\n");
                printf("Modifique os dados de Alguma Coisa\n");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');                
                break;
            }
            case 5: {
                if (contador == 0) {
                    printf("A lista esta vazia!\n");
                    break;
                }
                printf("Informe o dado de Alguma Coisa\n");
                printf("Deseja remover Alguma Coisa (S/N)?\n");
                if (getchar() == 'S') {
                    printf("Alguma coisa removida!");
                    contador--;
                }
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');
                break;
            }
            case 6: break;
            default: 
                printf("Opcao invalida. Tente de novo!");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');
        }
    }

    printf("Ate logo!\n");

    return 0;
}