/*7. Fazer um programa que leia dois n�meros e, usando a fun��o E_PRIMO, imprima todos os
n�meros primos que existem entre aqueles n�meros lidos.*/
#include"stdio.h"
#include"conio.h"

#define TRUE 1
#define FALSE 0

int E_Primo(int num)
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
	
	
	if(sdi==1)
	{
		return(TRUE);
	}
	else
	{
		return(FALSE);
	}	
}
//****************************************************************************************
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
		
		res=E_Primo(num);
		
		if(res==TRUE)
		{
			printf("\n %d e Primo",num);
		}
	}
}
