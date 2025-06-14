/*5. (repetir o exercício anterior mas ordenar decrescentemente).*/
#include"stdio.h"
#include"conio.h"

#define DIM 5

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

    printf("\nOs Valores Ordenados sao:\t");
    bubblesort_Decresc(chave);  imprimarray (chave);
}