/*2. Função dobro*/
#include"stdio.h"
#include"conio.h"

int dobro(int numr)
{
	return(2*numr);
}
//****************************************************************************************
main()
{
	int res,numr;
	
	printf("Diga um Numero: ");
	scanf("%d",&numr);
	
	res=dobro(numr);
	printf("\nO Dobro de %d e: %d",numr,res);
}
