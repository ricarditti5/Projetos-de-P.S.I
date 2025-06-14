/*3. Fazer um programa que leia um número e chame uma função E_PERFEITO que leva como
argumento esse número e devolve TRUE(1) se o número é perfeito (devolve FALSE(0) caso
contrário). NOTA: perfeito é um número que é igual à soma dos seus divisores (ex:6=1+2+3)*/
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
	int num,res;
	
	
	printf("Diga um Numero: "); scanf("%d",&num);
	
	res=E_Perfeito(num);
	
	if(res==TRUE)
	{
		printf("\n %d e perfeito", num);
	}
	else
	{
		printf("\n %d nao e perfeito", num);
	}
}
