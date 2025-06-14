/*3. Função quadrado*/
#include"stdio.h"
#include"conio.h"

int quadrado(int numr)
{
	return(numr*numr);
}
//****************************************************************************************
main()
{
	int res,numr;
	
	printf("Diga um Numero: ");
	scanf("%d",&numr);
	
	res=quadrado(numr);
	printf("\nO quadrado de %d e: %d",numr,res);
}

