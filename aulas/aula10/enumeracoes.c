#include <stdio.h>

int main() {
    // criar um conjunto de constantes
    // usar enumeracao (enum)
    enum meses_e {
        jan = 1,
        fev,
        mar,
        abr,
        mai,
        jun,
        jul,
        ago,
        set,
        out,
        nov,
        dez
    };

    int mes;
    printf("Informe o numero do mes: ");
    scanf("%i", &mes);

    switch (mes)
    {
    case jan: printf("Janeiro\n"); break;
    case fev: printf("Fevereiro\n"); break;
    case mar: printf("Marco\n"); break;
    case abr: printf("Abril\n"); break;
    case mai: printf("Maio\n"); break;
    case jun: printf("Junho\n"); break;
    case jul: printf("Julho\n"); break;
    case ago: printf("Agosto\n"); break;
    case set: printf("Setembro\n"); break;
    case out: printf("Outrubro\n"); break;
    case nov: printf("Novembro\n"); break;
    case dez: printf("Dezembro\n"); break;
    default:
        printf("Mes invalido. Tente novamente!\n");
        break;
    }

    return 0;
}