#include"stdio.h"
/* 4. Ler um n�mero N e dizer se ele � perfeito. NOTA: Um n�mero perfeito � aquele que � igual
� soma dos seus divisores.
Exemplo: 1 � perfeito;
2 n�o � perfeito;
3 n�o � perfeito;
6 � perfeito pq os seus divisores s�o 1, 2 e 3 (somando-os d� 6)*/

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

