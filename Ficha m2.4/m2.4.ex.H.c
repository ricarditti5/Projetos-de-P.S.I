/* H. Com base no programa anterior, fa�a um programa em que o utilizador v� pedindo
nos (e dando informa��o sobre o no introduzido) at� que o utilizador acerte no no
gerado pelo computador (vari�vel �escondido�).*/



#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "time.h"
#define MAX 100	//Mudar o numero a tua escolha.

main()
{
	srand(time(0)); 
	
	int num, i, mult, result, numins, numAleat,cont;
	
	numAleat=rand();
	num = (numAleat % MAX) + 1;
	cont=0;
	
	
	do
	{
		printf("Diga um numero: ");
		scanf("%d", &numins);
		
		if(numins<num)
		{
			printf("\n tem que introduzir um numero maior: \n");
		}
		if(numins>num)
		{
			printf("\n tem que introduzir um numero menor: \n");	
		}
		cont=cont+1;

		
	}	while (numins!=num);

	
	printf("\nNumero Escondido: %d", num);
	printf("\nVoce acertou depois de %d tentativas",cont);
	getch();
}
	
