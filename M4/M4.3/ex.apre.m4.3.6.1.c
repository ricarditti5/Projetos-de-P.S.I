/*1.6. Deslocamentos dos elementos no array
1.6.1. Fazer um shift à direita (deslocamento para a direita)
1.6.2. Fazer um shift à esquerda (deslocamento para a esquerda)
1.6.3. Transformar as operações anteriores em procedimentos e aplicar ao array cada um
desses procedimentos 4 vezes seguidas.*/



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
void SHIFTDir(int idade[DIM])
{
	int i;
	

	for(i=DIM-1;i>=1;i--)
	
	{
        idade[i]=idade[i-1];
    }
}
//********************************************************
void SHIFTESQ(int idade[DIM])
{
	int i;
	

	for(i=0;i<DIM-2;i++)

	{
        idade[i]=idade[i+1];
    }
}
//********************************************************
main()
{
	int idade[DIM];
	

	lerarray(idade);		printf("\nArrays:");					imprimirarray(idade);

    SHIFTDir(idade);        printf("\nArrays SHIFT Direita:");		imprimirarray(idade);

    SHIFTESQ(idade);        printf("\nArrays SHIFT Esquerda:");		imprimirarray(idade);
	
}