/*2. 5 pesos
2.1. declarar um array, pesos, com 5 elementos reais
2.2. inicializ�-lo com zeros
2.3. inicializar os dados do array
2.4. ler novos dados para o array
2.5. imprimir os dados do array
2.6. indicar a soma de todos os pesos
2.7. indicar a m�dia de todos os pesos*/

#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

#define NA 2

void iniciazero(float peso[NA])
{
	int i;

	for(i=0;i<NA;i++)
	{
		peso[i]=0; //2.2. inicializá-lo com zeros
	}
}

//********************************************************************
void lerpesos(float peso[NA])
{
	int i;
	
	for(i=0;i<NA;i++)
	{
		printf("\nDiga o Peso do Aluno %d: ",i+1); 
		scanf("%f",&peso[i]); //2.4. ler novos dados para o array
	}
	
}
//*******************************************************************+
void imprimpesos(float peso[NA])
{
	int i;
	
	printf("\nOs Valores dos dados do array sao:\n");
	for(i=0;i<NA;i++)
	{
		printf("\n%f",peso[i]);		//2.5. imprimir os dados do array
	}
	
}
//*********************************************************************
void somarpesos(float peso[NA])
{
	int i;
	float soma=0;
	
	for(i=0;i<NA;i++)
	{
		soma=soma+peso[i]; 
	}
	printf("\nA Soma dos Peso dos Alunos e:%f",soma); //2.6. indicar a soma de todos os pesos

}
//********************************************************************+
void mediapesos(float peso[NA])
{
	int i;
	float soma,media=0;
	
	media=soma/NA; 
	
	printf("\nA Media dos Peso dos Alunos e:%f",media); //2.7. indicar a m�dia de todos os pesos

	
}

//*************************************************
main()
{
	
	  //2.1. declarar um array, pesos, com 5 elementos reais
	float peso[NA];
	
	iniciazero(peso);
	imprimpesos(peso);
	
	lerpesos(peso);
	imprimpesos(peso);
	
	somarpesos(peso);
	mediapesos(peso);

}
