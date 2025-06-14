/* C-Modificar o programa anterior para poder ser utilizado para qualquer turma: ler no
início quantos alunos são.*/
#include"stdio.h"
#include"conio.h"

main()
{
	int i,idade,cont,soma,NA;
	float media;
	

	soma=0;
	printf("Diga quantos alunos tem na Turma: ");
	scanf("%d", &NA);
	for(i=1;i<=NA;i++)
	{
		do
		{
			printf("Diga a idade do aluno(Deve estar entre 15 e 18)%d: ", i);
			scanf("%d", &idade);
			
		}
		while((idade<15) || (idade>18)); 
	
		soma=soma+idade;
		
		
	}
	media=(float)soma/NA;
	printf("A Media de Todos os Alunos e: %.1f", media);
}

