/*4. Fun��o soma (de dois n�meros)*/
#include"stdio.h"
#include"conio.h"

int somar(int a, int b)
{
	return(a+b);
}

main()
{
	int soma,a,b;
	
	printf("Diga dois Numeros:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	soma= somar (a,b);
	
	printf("\nA Soma e: %d",soma);
}


