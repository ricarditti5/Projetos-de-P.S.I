/*4. Utilizando subprogramas (procedimentos e/ou fun��es) desenvolva o c�digo que implemente e
teste a fun��o somatorio de um numero (recursiva).*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

int somaRec(int num)
{
	int res;
	
	if(num==1)
	{
		res=1;
	}
	else
	{
		res= somaRec(num-1)+num;
	}
	return(res);
}
//**************************************************************************
main()
{
	int num, res;
	
	printf("\nDiga um Numero: "); scanf("%d",&num);
	
	res=factoRec(num);
	printf("\nO Factorial Recursivo do Numero %d e: %d",num,res); 
}


