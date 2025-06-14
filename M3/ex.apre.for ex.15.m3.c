#include"stdio.h"
#include"string.h"
#include"conio.h"

main()
{
	char nom[80];
	
	printf("Diga o Seu Nome: ");
	fflush(stdin);
	gets(nom);
	
	printf("%s",nom);
}
