#include <stdio.h>
#include <string.h>

int main()
{
    // como representar algo do mundo real ?
    // o que compoe um endereço residencial?

    // uma estrutura (struct) agrupa variaveis
    // criar um tipo na linguagem
    struct endereco_t
    {
        char logradouro[31];
        int numero;
        char complemento[31];
        char bairro[31];
        char cidade[51];
        char uf[3];
        long int cep;
    };

    // criar uma variavel a partir da estrutura
    struct endereco_t endereco;

    printf("Forneca o seu endereco\n");
    printf("Logradouro: ");
    //scanf("%s", endereco.logradouro);
    fgets(endereco.logradouro, sizeof(endereco.logradouro), stdin);
    printf("Numero: ");
    scanf("%i", &endereco.numero);
    while(getchar()!='\n');
    printf("Complemento: ");
    //scanf("%s", endereco.complemento);
    fgets(endereco.complemento, sizeof(endereco.complemento), stdin);
    printf("Bairro: ");
    // scanf("%s", endereco.bairro);
    fgets(endereco.bairro, sizeof(endereco.bairro), stdin);
    printf("Cidade: ");
    //scanf("%s", endereco.cidade);
    fgets(endereco.cidade, sizeof(endereco.cidade), stdin);
    printf("UF: ");
    scanf("%s", endereco.uf);
    while(getchar()!='\n');
    printf("CEP: ");
    scanf("%li", &endereco.cep);
    while(getchar()!='\n');

    struct endereco_t outro;
    
    // copia os valores da estrtura para outra
    outro = endereco;

    printf("Seu endereco \n");
    printf("%s, %i, %s\n", outro.logradouro, outro.numero, outro.complemento);
    printf("%s - %s/%s\n", outro.bairro, outro.cidade, outro.uf);
    printf("%08li\n", outro.cep);

    struct contato_t {
        char nome[61];
        long int telefone;
        struct endereco_t endereco;
    };

    struct contato_t contato;

    strcpy(contato.nome, "Jose");
    contato.endereco.numero = 612;
    strcpy(contato.endereco.logradouro, "SQS");

    // lista de 10 contatos
    struct contato_t contatos[10];

    return 0;
}