/*A. Ir lendo as idades dos alunos da turma. No final imprimir a média.*/
#include"stdio.h"
#include"conio.h"

#define NA 2   // mudar para 28

main()
{
	int i,idade,cont,soma;
	float media;
	
	cont=0;
	soma=0;
	for(i=1;i<=NA;i++)
	{
		printf("Diga a idade de um aluno para ler a media: ");
		scanf("%d", &idade);
		soma=soma+idade;
		
	}
	media=(float)soma/NA;
	printf("A Media de Todos os Alunos e: %.1f", media);
}

