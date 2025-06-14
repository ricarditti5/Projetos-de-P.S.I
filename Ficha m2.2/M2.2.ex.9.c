


/* 9. Ler um número N e dizer se é primo

NOTA: No primo é um número que só é divisível por ele próprio e por 1.
Exemplo: 1 é primo;
2 é primo;
3 é primo;
4 não é primo; pq tem outro divisor:2
5 é primo;
6 não é primo; porque tem outros divisores:2 e 3*/
#include"conio.h"
#include"stdlib.h"

main()
{
	int num,i,sdi;
	
	printf("Diga um numero para ver se e primo\n");	
	scanf("%d",&num);
	
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
		printf("\n %d e primo", num);
	}
	else
	{
		printf("\n %d nao e primo", num);
	}
		
		
	
}

