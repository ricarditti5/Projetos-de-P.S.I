/*9. Fazer um programa que leia um no N e chame um procedimento que escreve “BOM DIA!” N
vezes (N é-lhe passado como argumento).*/
#include"stdio.h"
#include"conio.h"

void mostrarBomDia(num)
{
	int i;
	
	for(i=1;i<=num;i++)
	{
		printf("\n******************************");
		printf("\n**********Bom Dia**********");
		printf("\n******************************");
	}
	
}

main()
{
	int num;
	printf("Diga um Numero:"); scanf("%d",&num);
	mostrarBomDia(num);
}




