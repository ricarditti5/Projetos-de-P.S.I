
#include"stdio.h"
#include"conio.h"

#define NUMA 20

main()
{
	int idade,cont,soma;
	float media;

	cont=0;
	soma=0;

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
/*
1. Imprimir todos os caracteres cujos códigos ASCII estão entre 65 e 90.
NOTA: Experimente usar num programa o seguinte código para imprimir o carater ‘A’ e o ‘B’
e para ler um carater qualquer (imprimindo de seguida os 3)

int c1,c2,c3;
c1= ‘A’;
c2= 66;
printf(“Escreva um character:”); fflush(stdin); c3=getchar();
printf(“%c”,c1); printf(“%c”,c2); printf(“%c”,c3);*/
