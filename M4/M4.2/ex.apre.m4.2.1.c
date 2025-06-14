/*1. 4 idades
1.1. declarar um array, idades, de 4 elementos inteiros
1.2. inicializ�-lo com zeros
1.3. inicializar os dados do array
1.4. ler novos dados para o array
1.5. imprimir os dados do array*/

#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

#define NA 2

void iniciaarray()
{
	int i,idd[NA];
	
	for(i=0;i<NA;i++)
	{
		idd[i]=0; //1.2. inicializ�-lo com zeros
	}	
}
//*******************************************************************************************
void dadosArray()
{
	int i,idd[NA];
	
	for(i=0;i<NA;i++)
	{
		printf("\n%d",idd[i]); //1.3. imprimir os dados do array
	}
}
//*******************************************************************************************
void lerarray()
{
	int i, idd[NA];
	
	for(i=0;i<NA;i++)
	{
		printf("\nDiga a Idade do Aluno %d: ",i+1); scanf("%d",&idd[i]); //1.4. ler novos dados para o array
	}
}
//*******************************************************************************************
void imprimarray()
{
	int i, idd[NA];
	
	printf("\nOs Dados do Array sao:\n");
	for(i=0;i<NA;i++)
	{
		printf("\n%d",idd[i]);		//1.5. imprimir os dados do array*/
		
	}
}
//*******************************************************************************************
main()
{
	
	int  idd[NA],i; //1.1. declarar um array, idades, de 4 elementos inteiros
	

	
	printf("\nOs Valores dos dados do array sao:\n");
	
	declarray();
	
	dadosArray();
	
	lerarray();
	
	imprimarray();
	
}
