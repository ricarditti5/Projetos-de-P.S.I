/*(Após rever o algoritmo de “ordenação por detecção sucessiva dos menores elementos
encontrados – selection sort) Ler os 5 números da chave do euromilhões para um array Chave e
alterar esse array para que fique ordenado por ordem crescente. Modificar o exercício, usando
uma constante DIM, de forma a que a dimensão do array possa ser facilmente alterada pelo
programador.*/

#include"stdio.h"
#include"conio.h"

#define DIM 5


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
    ord_minsucessiv(chave);  imprimarray (chave);
}