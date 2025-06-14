/*4. (Após rever o algoritmo de “ordenação por troca imediata”) Ler os 5 números da chave do
euromilhões para um array A e alterar esse array para que fique ordenado por ordem crescente.*/

#include"stdio.h"
#include"conio.h"

#define DIM 5


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

    printf("\nOs Valores Ordenados sao:\t");
    bubblesort(chave);  imprimarray (chave);
}