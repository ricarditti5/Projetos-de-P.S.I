/*2. 5 pesos
2.1. declarar um array, pesos, com 5 elementos reais
2.2. inicializá-lo com zeros
2.3. imprimir os dados do array
2.4. ler novos dados para o array
2.5. imprimir os dados do array
2.6. indicar a soma de todos os pesos
2.7. indicar a média de todos os pesos*/
#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

#define NA 2
main()
{
	
	int i;  //2.1. declarar um array, pesos, com 5 elementos reais
	float peso[NA],soma=0,media=0; 
	
	for(i=0;i<NA;i++)
	{
		peso[i]=0; //2.2. inicializá-lo com zeros
	}
	
	printf("\nOs Valores dos dados do array sao:\n");
	
	for(i=0;i<NA;i++)
	{
		printf("\n%f",peso[i]); //2.3. imprimir os dados do array
	}
	
	for(i=0;i<NA;i++)
	{
		printf("\nDiga o Peso do Aluno %d: ",i+1); 
		scanf("%f",&peso[i]); //2.4. ler novos dados para o array
	}
	
	printf("\nOs Dados do Array sao:\n");
	for(i=0;i<NA;i++)
	{
		printf("\n%f",peso[i]);		//2.5. imprimir os dados do array
		
	}
	
	for(i=0;i<NA;i++)
	{
		soma=soma+peso[i]; 
	}
	
	media=soma/NA; 
	
	printf("\nA Soma dos Peso dos Alunos e:%f",soma); //2.6. indicar a soma de todos os pesos

	printf("\nA Media dos Peso dos Alunos e:%f",media); //2.7. indicar a média de todos os pesos
}
