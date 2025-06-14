#include"stdio.h"
#include"conio.h"

#define NUMA al

main()
{
	int idade,cont,soma,al;
	float media;

	cont=0;
	soma=0;
	
	printf("Diga Quantos alunos tem na Turma\n");
	scanf("%d", &al);
	do
	{
		printf("Diga a idade de um aluno\n");	
		scanf("%d",&idade); 
		soma=soma+idade;
		cont=cont+1;
	}while(cont<NUMA);
	
	media=(float)soma/NUMA;
	printf("A Media de todas as idades e: %.2f",media);
}
