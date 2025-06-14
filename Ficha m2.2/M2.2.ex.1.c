/*
1. Imprimir todos os caracteres cujos c�digos ASCII est�o entre 65 e 90.
NOTA: Experimente usar num programa o seguinte c�digo para imprimir o carater �A� e o �B�
e para ler um carater qualquer (imprimindo de seguida os 3)

int c1,c2,c3;
c1= �A�;
c2= 66;
printf("Escreva um character:�); fflush(stdin); c3=getchar();
printf(�%c�,c1); printf(�%c�,c2); printf(�%c�,c3);*/

#include<stdio.h>
#include<conio.h>
main()
{
		int i;
	
	for( i= 65; i<=90 ; i++)
	{
		printf("%c ",i);
	}
}

