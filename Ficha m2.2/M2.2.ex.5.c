/* 5. Ler um n�mero X e imprimir todos os perfeitos que existem entre 1 e esse n�mero.*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

main()
{
	int num,i,max,sdi;
	
	printf("Diga um numero para ver os numeros pefeitos ate ele: ");	
	scanf("%d", &max);
	
	for(num=1;num<=max;num++)
	{
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
		
	}
	
	
	
		
		
	
}

