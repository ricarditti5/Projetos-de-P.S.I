/*16. Alterar o programa anterior para que leia um nome NOME e um número N imprima “O/a
<NOME> é muito muito.... inteligente”, onde a palavra “muito” aparece repetida N vezes.*/
#include"stdio.h"
#include"conio.h"
#include"string.h"

void mostrarNome(char nom[80], int num)
{
	int i;
	
	printf("\nOla,%s e ",nom);
	for(i=1;i<=num;i++)
	{
		printf("muito ");
	}
	printf("Inteligente**********");

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
