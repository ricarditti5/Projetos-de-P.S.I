/*1.5. Ordenar o array (crescentemente)
1.5.1. M�todo 1 (por descoberta de min/max sucessivos)
1.5.2. M�todo 2 (bubble sort)
1.5.3. Repetir os dois anteriores mas para ordenar decrescentemente*/

#include"stdio.h"
#include"conio.h"

#define DIM 4
 
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
	
	printf("\nOs Valores sao: ");

	for(i=0;i<DIM;i++)

	{
		printf("\t %d",idade[i]);
	}
}
//********************************************************
void ord_minsucessiv(int idade[DIM])
{
	int i,min,j,posimin,aux;
	

	for(i=0;i<DIM-1;i++)
	{
		posimin=i;
		min=idade[i];
		
		for(j=i+1; j<DIM;j++)
		{
			if(idade[j]<min)
			{
				min=idade[j];
				posimin=j;
			}
		}
		if(min<idade[i])
		{
			aux=idade[i];
			idade[i]=idade[posimin];
			idade[posimin]=aux;
		}
	}
}
//************************************************************************
void ord_minsucessiv_Decresc(int idade[DIM])
{
	int i,min,j,posimin,aux;


	for(i=0;i<DIM-1;i++)
	{
		posimin=i;
		min=idade[i];
		
		for(j=i+1; j<DIM;j++)
		{
			if(idade[j]>min)
			{
				min=idade[j];
				posimin=j;
			}
		}
		if(min>idade[i])
		{
			aux=idade[i];
			idade[i]=idade[posimin];
			idade[posimin]=aux;
		}
	}
}
//***********************************************************************
void bubblesort(int idade[DIM])
{
	int i,j,aux;
	
	
	for(i=0;i<=DIM-2;i++)
	{
		for(j=i+1;j<=DIM-1;j++)
		{
			if(idade[j]<idade[i])
			{
				aux=idade[i];
				idade[i]=idade[j];
				idade[j]=aux;
			}
		}
	}
}
//********************************************************
void bubblesort_Decresc(int idade[DIM])
{
	int i,j,aux;
	
	
	for(i=0;i<=DIM-2;i++)
	{
		for(j=i+1;j<=DIM-1;j++)
		{
			if(idade[j]>idade[i])
			{
				aux=idade[i];
				idade[i]=idade[j];
				idade[j]=aux;
			}
		}
	}
}
//********************************************************
main()
{
	int idade[DIM];

	lerarray(idade);		printf("Arrays:");													imprimirarray(idade);

	ord_minsucessiv(idade);	printf("\nOrdenacao Crescente:\n");									imprimirarray(idade);
	
	ord_minsucessiv_Decresc(idade);	printf("\nOrdenacao Descrescente:\n");						imprimirarray(idade);
	
	bubblesort(idade);		printf("\nBuble Sort:\n");											imprimirarray(idade);

	bubblesort_Decresc(idade);		printf("\nBuble Sort Decrescente:\n");						imprimirarray(idade);
}