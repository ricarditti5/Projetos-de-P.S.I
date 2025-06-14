/* Somar dois numeros*/
#include"stdio.h"
#include"conio.h"


int somar(int a, int b)
{
	return(a+b);
}

int subnum(int a, int b)
{
	return(a-b);
}

int mltpnum(int a, int b)
{
	return(a*b);
}

float divnum(int a, int b)
{
	return(a/b);
}


main()
{
	int sub,mltp,soma,a,b;
	float div;
	
	printf("Diga dois Numeros:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	soma= somar (a,b);
	sub= subnum (a,b);
	mltp= mltpnum(a,b);
	div=divnum (a,b);
	
	printf("\nA Soma e: %d",soma);
	printf("\nA Diferenca dos Numeros e: %d",sub);
	printf("\nO Produto dos Numeros e: %d",mltp);
	printf("\nO Quociente dos Numeros e: %f",div);
}
