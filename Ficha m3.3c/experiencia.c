#include"stdio.h"
#include"stdlib.h"
#include"conio.h"

#define NOTA 10

main()
{
	int x;
	
	printf("Diga uma nota:");
	scanf("%d", &x);
	
	if(x>=NOTA)
	{
		printf("Positiva");
		
	}
	else
		printf("Negativa");	
}
