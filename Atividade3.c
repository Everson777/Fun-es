#include <stdio.h>
#include <stdlib.h>

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

void imprimir(int numero)
{

    if (numero % 2 == 0)
    {
        printf("%d - par.\n", numero);
    }
    else
    {
        printf("%d - impar.\n", numero);
    }
}

int main()
{

    int numero;
    // Solicitando dados
    Tatli();

    printf("\nDigite um numero:");
    scanf("%d", &numero);

    Limpartela();

    imprimir(numero);
}
