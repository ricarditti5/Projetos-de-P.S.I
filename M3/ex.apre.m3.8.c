/* Somar dois numeros*/
#include"stdio.h"
#include"conio.h"

int subnum(int a, int b)
{
	return(a-b);
}

main()
{
	int sub,a,b;
	printf("Diga dois Numeros:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	sub= subnum (a,b);
	printf("\nA subtracao dos Numeros e: %d",sub);
}
