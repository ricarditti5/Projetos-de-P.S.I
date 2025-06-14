/* 3. Ir lendo números até que a soma seja igual ou superior a 500. (DO..WHILE)*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
		int num, soma; 
		
		soma=0;
		
		do 
	{
		printf("\n Diga um numero: ");
		scanf ("%d", &num);
		soma = soma + num;
	}
	while(soma < 500  );
		printf("\n A soma de todos os valores introduzidos atingiu %d", soma);
}
	
