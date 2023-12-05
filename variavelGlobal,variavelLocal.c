#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cabecalho()
{

    printf("\n===================================\n");
    printf("\t\tSenai");
    printf("\n=====================================\n");
}

void Limpatela()
{
    fflush(stdin);
    system("cls||clear");
}

int main()
{

    char nome[2000];
    int idade;

    cabecalho(); // Chamada da função.

    printf("\nDigite seu nome:");
    gets(nome);
    Limpatela();

    cabecalho();
    printf("\nDigite uma idade:");
    scanf("%d", &idade);
    Limpatela();

    cabecalho();

    printf("\nNome:%s\n", nome);
    printf("\nIdade:%d\n", idade);

    return 0;
}
 