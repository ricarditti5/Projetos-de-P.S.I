/*15. Fazer um programa que leia o seu nome e um número N e chame um procedimento MOSTRAR
que leva como argumentos esses dados e imprime N vezes o seu nome.*/
#include"stdio.h"
#include"conio.h"
#include"string.h"

void mostrarNome(char nom[80], int num)
{
	int i;
	
	for(i=1;i<=num;i++)
	{
		printf("\n******************************");
		printf("\n**********%s**********",nom);
		printf("\n******************************");
	}

}
//***************************************************************************************
main()
{
	int num;
	char nom[80];
	
	printf("Diga o Seu Nome:"); 
	fflush(stdin);
	gets(nom);
	
	printf("Diga um Numero:"); 	scanf("%d",&num);
	
	mostrarNome(nom, num);
}
