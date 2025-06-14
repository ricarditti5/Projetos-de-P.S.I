/*1. 4 idades
1.1. declarar um array, idades, de 4 elementos inteiros
1.2. inicializá-lo com zeros
1.3. imprimir os dados do array
1.4. ler novos dados para o array
1.5. imprimir os dados do array*/

#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

#define na 4
main()
{
	
	int idd[na],i; //1.1. declarar um array, idades, de 4 elementos inteiros
	
	for(i=0;i<na;i++)
	{
		idd[i]=0; //1.2. inicializá-lo com zeros
	}

	printf("\nOs Valores dos dados do array sao:\n");
	
	for(i=0;i<na;i++)
	{
		printf("\n%d",idd[i]); //1.3. imprimir os dados do array
	}
	
	for(i=0;i<na;i++)
	{
		printf("\nDiga a Idade do Aluno %d: ",i+1); scanf("%d",&idd[i]); //1.4. ler novos dados para o array
	}
	
	printf("\nOs Dados do Array sao:\n");
	for(i=0;i<na;i++)
	{
		printf("\n%d",idd[i]);		//1.5. imprimir os dados do array*/	
	}
}
