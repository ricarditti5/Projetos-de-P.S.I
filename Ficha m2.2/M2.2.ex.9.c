


/* 9. Ler um n�mero N e dizer se � primo

NOTA: No primo � um n�mero que s� � divis�vel por ele pr�prio e por 1.
Exemplo: 1 � primo;
2 � primo;
3 � primo;
4 n�o � primo; pq tem outro divisor:2
5 � primo;
6 n�o � primo; porque tem outros divisores:2 e 3*/
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

