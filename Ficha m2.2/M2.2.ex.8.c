/*8. Modificar o programa anterior de modo a não ler quantos alunos são mas pedir para
introduzir a idade 0 para parar.*/
#include"stdio.h"
#include"conio.h"

main()
{
	int idade,cont,soma;
	float media;

	cont=0;
	soma=0;
	
	do
	{
		printf("Diga a idade de um aluno:");	
		scanf("%d",&idade); 
		soma=soma+idade;
		cont=cont+1;
	}
	while(idade!=0);
	
	media=(float)soma/(cont-1);
	printf("A Media de todas as idades e %.2f",media);
}
