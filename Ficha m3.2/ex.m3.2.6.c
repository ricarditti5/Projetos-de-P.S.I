/*6. Fazer um programa que leia dois números e, usando a função E_PERFEITO, imprima todos os
números perfeitos que existem entre aqueles números lidos.*/
#include"stdio.h"
#include"conio.h"

#define TRUE 1
#define FALSE 0

int E_Perfeito(int num)
{

	int i,sdi;
	
	
	sdi=0;
	
	for(i=1;i<=(num-1);i++)
	{
		if((num%i)==0)
		{
			sdi=sdi+i;
		}
			
	}
	
	
	if(sdi==num)
	{
		return(TRUE);
	}
	else
	{
		return(FALSE);
	}	
}
//*****************************************************************
main()
{
int num,res,num1,num2,aux;
	
	
	printf("Diga um Numero: "); scanf("%d",&num1);
	printf("Diga um Numero: "); scanf("%d",&num2);
		
	if(num1>num2)
	{
		aux=num1;
		num1=num2;
		num2=aux;
	}
	
	for(num=num1;num<=num2;num++)
	{
		
		res=E_Perfeito(num);
		
		if(res==TRUE)
		{
			printf("\n %d e perfeito",num);
		}
	}
}
