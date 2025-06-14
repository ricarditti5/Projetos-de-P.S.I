/* D. Modificar o programa A para dar para qualquer turma. Não ler quantos alunos são
mas pedir para introduzir a idade 0 para parar.*/
#include"stdio.h"
#include"conio.h"

#define NA 2   // mudar para 28

main()
{
	int i,idade,cont,soma;
	float media;
	
	cont=0;
	soma=0;
	do
	{
		printf("Diga a idade de um aluno(coloque zero para parar): ");
		scanf("%d", &idade);
		soma=soma+idade;
		
	}
	while(idade=0);
	
	media=(float)soma/NA;
	printf("A Media de Todos os Alunos e: %.1f", media);
}

