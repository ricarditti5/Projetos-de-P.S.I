/*1. (4 idades)
1.1. Calcular e imprimir o maior elemento do array
1.2. Calcular e imprimir o menor elemento do array
1.3. Calcular e imprimir a posi��o onde aparece o maior elemento do array
1.4. Calcular e imprimir a posi��o onde aparece o menor elemento do array*/

#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

#define DIM 4

//********************************************************

void lerarray(int idade[DIM])
{
	int i;
	
	for(i=0;i<DIM;i++)
	{
		printf("\nDiga a Idade do Aluno:",i+1); 	scanf("%d",&idade[i]);
	}
}

//********************************************************

void imprimirarray(int idade[DIM])
{
	int i;
	
	printf("\nOs Valores sao:\n");

	for(i=0;i<DIM;i++)

	{
		printf("\n%d",idade[i]);
	}
}


//********************************************************
void vermaior(int idade[DIM])
{
	int maior,posi=0,i;

	maior=idade[0];
	for(i=0;i<DIM;i++)
	{
		if(idade[i]>maior)
		{
			maior=idade[i];
			posi=i;
		}
	}
	
	printf("\nOs Valores estao na %do Posicao",posi+1); //1.3. Calcular e imprimir a posi��o onde aparece o maior elemento do array
	
}
//***********************************************************************************************
void vermenor(int idade[DIM])
{
	int menor,posi=0,i;

	menor=idade[0];
	for(i=0;i<DIM;i++)
	{
		if(idade[i]>menor)
		{
			menor=idade[i];
			posi=i;
		}
	}
	
	printf("\nOs Valores estao na %do Posicao",posi+1); //1.4. Calcular e imprimir a posi��o onde aparece o menor elemento do array
	
}
main()
{
	int idade[DIM];
	
	lerarray(idade);
	
	imprimirarray(idade);

	vermaior(idade); //1.1. Calcular e imprimir o maior elemento do array
	
	vermaior(idade);//1.2. Calcular e imprimir o menor elemento do array

	
}
