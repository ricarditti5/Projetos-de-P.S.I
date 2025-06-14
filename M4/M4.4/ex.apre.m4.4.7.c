/*7. (repetir o exercício anterior mas ordenar com o método Bubble sort e decrescentemente).*/

#include"stdio.h"
#include"conio.h"

#define DIM 5


void ord_minsucessiv_Decresc(int chave[DIM])
{
	int i,min,j,posimin,aux;


	for(i=0;i<DIM-1;i++)
	{
		posimin=i;
		min=chave[i];
		
		for(j=i+1; j<DIM;j++)
		{
			if(chave[j]>min)
			{
				min=chave[j];
				posimin=j;
			}
		}
		if(min>chave[i])
		{
			aux=chave[i];
			chave[i]=chave[posimin];
			chave[posimin]=aux;
		}
	}
}
//***********************************************************************
void bubblesort(int chave[DIM])
{
	int i,j,aux;
	
	
	for(i=0;i<=DIM-2;i++)
	{
		for(j=i+1;j<=DIM-1;j++)
		{
			if(chave[j]<chave[i])
			{
				aux=chave[i];
				chave[i]=chave[j];
				chave[j]=aux;
			}
		}
	}
}
//********************************************************
void imprimarray (int chave[DIM])
{
    int i;

    for (i=0;i<DIM;i++)
    {
        printf("\t%d",chave[i]);
    }
}
//**************************************************************************************************
void limpararray (int chave[DIM])
{
    int i;

    for (i=0;i<DIM;i++)
    {
        chave[i]=0;
    }
}
//**************************************************************************************************
void lerarray(int chave[DIM])
{
    int i;

    for (i=0;i<DIM;i++)
    {
        printf("\nDiga 5 Numeros para o Euro Milhoes:");  scanf("%d",&chave[i]);
    }
}
//**************************************************************************************************
main()
{
    int chave[DIM];

    lerarray(chave);        imprimarray (chave);

    printf("\nOs Valores Ordenados(Ordenacao)sao:\t");
    ord_minsucessiv_Decresc(chave);  imprimarray (chave);
    printf("\nOs Valores Ordenados(Bubble sort) sao:\t");
    bubblesort(chave);  imprimarray (chave);
}