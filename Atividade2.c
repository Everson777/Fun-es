#include <stdio.h>
#include <stdlib.h>


void Tatli (){

printf("\n========================================\n");
printf("\t\t Tabuada");
printf("\n========================================\n");
}


void Limpartela(){

system("cls||clear");

}

void imprimirtabuada(int numero,int i){

for ( i = 1; i <= 10; i++)
{
    printf("\n%d x %d = %d ", numero,i, numero*i);
}


}

int main(){

int numero;
int i;


//Solicitando dados 
Tatli();

printf("\nDigite um numero referente a tabuada:");
scanf("%d",&numero);

Limpartela();

imprimirtabuada(numero,i);

}
