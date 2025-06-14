/*14. Fazer um programa que leia uma letra L e um número N e chame um procedimento IMPRIMIR
que leva como argumentos esses dados e imprime N vezes a letra L.*/
#include"stdio.h"
#include"conio.h"

void mostrarL(num)
{
	int i;
	
	for(i=1;i<=num;i++)
	{
		printf("\n******************************");
		printf("\n**********L**********");
		printf("\n******************************");
	}
	
}

main()
{
	int num;
	printf("Diga um Numero:"); scanf("%d",&num);
	mostrarL(num);
}

