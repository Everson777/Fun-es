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
float numeros(float n1,float n2){
float resultado;
resultado = (n1 + n2) /2; 
return resultado;
}
int main()
{
    float soma;
    float primeiroNumero,segundoNumero;

    cabecalho(); // Chamada da função.

    printf("\nDigite o primeiro numero:");
    scanf("%f", &primeiroNumero);

    cabecalho();
    printf("\nDigite o segundo numero:");
    scanf("%f", &segundoNumero);
    

    cabecalho();

    printf("\nSoma:%.2f\n", soma = numeros(primeiroNumero, segundoNumero));

  return 0;
}
