/*  ********************* */



#include"stdio.h"
#include"conio.h"

#define DIM 5
 
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
void RODDir(int idade[DIM])
{
	int i,aux;

    aux=idade[DIM-1];
	for(i=DIM-1;i>=1;i--)

	{
        idade[i]=idade[i-1];
    }
    idade[0]=aux;
}
//********************************************************
/*void RODESQ(int idade[DIM])
{
	int i,aux;

    aux=idade[DIM-2];

	for(i=0;i<DIM-2;i++)

	{
        idade[i]=idade[i+1];
    }

    idade[0]=aux;

}*/
void RODESQ(int idade[DIM]) //este subprgrama foi feito com IA.
{
    int i, aux;

    // Armazena o primeiro elemento
    aux = idade[0];

    // Desloca todos os elementos uma posição para a esquerda
    for(i=0;i<DIM-1;i++)

	{
        idade[i]=idade[i+1];
    }
    // Coloca o primeiro elemento na última posição
    idade[DIM - 1] = aux;
}
//********************************************************
main()
{
	int idade[DIM];


	lerarray(idade);		printf("\nArrays:");					imprimirarray(idade);

    RODDir(idade);        printf("\nArrays SHIFT Direita:");		imprimirarray(idade);

    RODESQ(idade);        printf("\nArrays SHIFT Esquerda:");		imprimirarray(idade);

}