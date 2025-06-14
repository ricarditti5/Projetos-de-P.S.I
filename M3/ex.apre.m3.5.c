/*Faça um programa, ler quantas vezes(xx) quer ver "Ola"
(no programa principal)e chamar um procedimento 'Olavv' que recebe xx e repete a impressão da frase e  
esse numero de vezes*/
#include"stdio.h"
#include"conio.h"

void dizerOlavv(int num)
{	int i;
	
	for(i=1;i<=num;i++)
	{
		printf("\n\n*******************");
		printf("\n******Ola****");
		printf("\n*******************");
	}
}


main()
{
	int num;
	
	printf("Diga Quantas Vezes quer Ver Ola: "); 
	scanf("%d",&num);
	
	dizerOlavv(num);
	
	
}
