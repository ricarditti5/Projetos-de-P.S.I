/*Preencher um array com os números pares compreendidos entre 2 e 20. Preencher um outro array
com os números de 10 a 19. Mostrar as somas dos elementos dos dois arrays, para cada umas das
10 posições.*/
#include "stdio.h"
#include "stdlib.h"
#define DIM 10 



void preencherNumerosPares(int numerosPares[DIM]) 
{
    int ii = 0;
    for(int i = 2; i <= 20; i += 2) 
    {
        numerosPares[ii] = i; 
        ii++; 
	}
}


void preencherNumerosDezANove(int numerosDezANove[DIM]) 
{
    for(int i = 10; i < 20; i++) 
    {
        numerosDezANove[i - 10] = i;
    }
}


void imprimirSomas(int numerosPares[DIM], int numerosDezANove[DIM]) 
{
    printf(" As Somas dos elementos dos dois arrays:\n");
    for(int i = 0; i < DIM; i++) 
    {
        int soma = numerosPares[i] + numerosDezANove[i]; 
        printf("A Soma da posicao %d: %d + %d = %d\n", i, numerosPares[i], numerosDezANove[i], soma);
    }
}

int main() 
{
    int numerosPares[DIM];
    int numerosDezANove[DIM]; 
    
   
    preencherNumerosPares(numerosPares);
    preencherNumerosDezANove(numerosDezANove);
    
   
    imprimirSomas(numerosPares, numerosDezANove);
    


