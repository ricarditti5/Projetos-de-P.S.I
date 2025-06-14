#include"stdio.h"
/* 4. Ler um número N e dizer se ele é perfeito. NOTA: Um número perfeito é aquele que é igual
à soma dos seus divisores.
Exemplo: 1 é perfeito;
2 não é perfeito;
3 não é perfeito;
6 é perfeito pq os seus divisores são 1, 2 e 3 (somando-os dá 6)*/

#include"conio.h"
#include"stdlib.h"

main()
{
	int num,i,sdi;
	
	printf("Diga um numero para ver se e perfeito\n");	
	scanf("%d",&num);
	
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
		printf("\n %d e perfeito", num);
	}
	else
	{
		printf("\n %d nao e perfeito", num);
	}
		
		
	
}

