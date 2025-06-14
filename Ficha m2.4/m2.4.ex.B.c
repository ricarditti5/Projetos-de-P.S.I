/* B. Modificar o programa anterior para validar cada uma das idades que vão sendo lidas
(têm que estar entre 15 e 18).*/
#include"stdio.h"
#include"conio.h"

#define NA 2   // mudar para 28

main()
{
	int i,idade,cont,soma;
	float media;
	

	soma=0;
		
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

