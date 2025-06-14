/*17. Fazer a função ACUMULA que leva como argumento 2 números inteiros (A e B) e calcula e
devolve a soma de todos os números que ficam entre A e B (inclusive). Fazer um programa que
chame essa função e imprima o resultado. NOTA: Lembre-se que o utilizador pode introduzir os
números (A e B) por ordem decrescente.*/
#include"stdio.h"
#include"conio.h"

//*********************************************************************************
int acumular(int num,int num1)
{
	int soma;
	
	soma=0;
	
	if(num>=num1) 
	{
		do 
		{
			soma=soma+num1;
			num1=num1+1;
		} while(num1<=num);
	}
	else
	{
		do 
		{
			soma=soma+num;
			num=num+1;
		} 
		while(num<=num1);
	}
	
	return(soma);
}
//*********************************************************************************

main()
{
	int num,num1,soma;
	
	printf("Diga dois Numeros: "); scanf("%d %d",&num,&num1);

	soma=acumular(num,num1);
	printf("O Valor Final e: %d",soma);
}
