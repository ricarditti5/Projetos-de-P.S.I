 /*1. Utilizando subprogramas (procedimentos e/ou funções) desenvolva o código que complete as
seguintes instruções:

ordenar(&a, &b);
printf("a soma de todos os numeros entre %d e %d e: %d", a, b, somatorio(a,b));*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

int somatorio(int a, int b)
{
	int i,soma;
	
	soma=0;
	for(i=a;i<=b;i++)
	{
		soma=soma+i;
	}
	return(soma);
}
//***********************************************************************
void ordenar(int *a, int *b)
{
	int aux;
	
	if(*a>*b)
	{
		aux=*a;
		*a=*b;
		*b=aux;
	} 
}
main()
{
	int a,b;
	

	printf("Diga dois Numeros:"); scanf("%d %d",&a,&b);
	
	ordenar(&a, &b);
	
	printf("\nA Soma de todos os numeros entre %d e %d e: %d", a, b, somatorio(a,b));
}

