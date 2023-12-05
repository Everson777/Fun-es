#include <stdio.h>
#include <stdlib.h>



#define TAM 6


void Tatli()
{

    printf("\n========================================\n");
    printf("\t\t Tabelinha");
    printf("\n========================================\n");
}

void Limpartela()
{

    system("cls||clear");
}

void paresOUimares(int numero[])
{
    int i, pares = 0, impares = 0;
    

    for (i = 0; i < TAM; i++)
    {

        if (numero[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    printf("\nQuantidade de pares:%d", pares);
    printf("\nQuantidade de impares:%d", impares);
}
int main()
{

    int numero[TAM], i;
    int pares;
    int impares;
    
    // Solicitando dados
    Tatli();
    for (i = 0; i < TAM; i++)
    {

        printf("\nDigite o %dº numero:", i + 1);
        scanf("%d", &numero[i]);
    }

    Limpartela();

    paresOUimares(numero);
}
