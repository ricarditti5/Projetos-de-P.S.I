/*1. INSERIR UM ELEMENTO NUM ARRAY c/ deslocamento (shift) à direita e à esquerda

1.1. Declarar um array A de 5 elementos. Inicializar o array a 0. Ler valores novos para o array.
Ler um novo no para inserir no início do array, fazendo um deslocamento à direita dos
elementos que já estão no array.*/

#include"stdio.h"
#include"conio.h"

#define DIM 5

void iniciarray(int ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
       ar[i]=0;
    }
}
//********************************************************
void lerarray(int ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nDiga um Numero:\t"); scanf("%d",&ar[i]);
    }
}
//********************************************************
void imprimarrar(int ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\t%d",ar[i]);
    }
}
void SHIFTDIR(int ar[DIM])
{
    int i;

	for(i=DIM-1;i>=1;i--)
	{
        ar[i]=ar[i-1];
    }
}
//********************************************************
main()
{
    int ar[DIM]; 

    iniciarray(ar);    imprimarrar(ar);

    lerarray(ar);

    SHIFTDIR(ar);     
    printf("\nDiga um Numero:\t"); scanf("%d",&ar[0]);
    imprimarrar(ar);
     
}