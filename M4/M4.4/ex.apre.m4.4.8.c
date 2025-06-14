/*Preencher um array com todos os números pares compreendidos entre 2 e 20.*/

#include "stdio.h"
#include "stdlib.h"
#define DIM 10

void preencher(int numeros[DIM])
{
    int i;
    for(i = 0; i < DIM; i++)

{
        numeros [i]=(i+1)*2;
    }
}
void imprimirNumeros(int numeros[DIM])
{
    int i;
    printf("Numeros pares são: ");
    for(i = 0; i < DIM; i++)
{
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

int main()
{
    int numeros[DIM];
   
    preencher(numeros);	
    imprimirNumeros(numeros);
}
