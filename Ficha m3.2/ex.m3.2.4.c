/*4. Fazer um programa que leia um número e chame uma função E_PRIMO que leva como
argumento esse número e devolve TRUE(1) se o número é primo (devolve FALSE(0) caso
contrário). NOTA: primo é um número que não tem divisores para além do 1 (ex:5).*/
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
//*****************************************************************
main()
{
	int num,res;
	
	
	printf("Diga um Numero: "); scanf("%d",&num);
	
	res=E_Primo(num);
	
	if(res==TRUE)
	{
		printf("\n %d e Primo", num);
	}
	else
	{
		printf("\n %d nao e Primo", num);
	}
}
