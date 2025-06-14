/*3. Utilizando subprogramas (procedimentos e/ou funções) desenvolva o código que implemente e
teste a função soma de dois numeros (recursiva).*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

int somar(int num1,int num2)
{
	int res;
	
	if(num1==0)
	{
		res=num2;
	}
	else
	{
		res=somar(num1-1,num2+1);
	}
	return(res);
}
//**************************************************************************
main()
{
	int num1,num2, res;
	
	printf("Diga dois Numeros:"); scanf("%d %d",&num1,&num2);
	
	res=somar(num1,num2);
	printf("\nA Soma Recursiva dos Numero %d e %d: %d",num1,num2,res); 
}


