/*10. Fazer um programa que leia dois nos A e B e chame um procedimento SOMAR que leva como
argumentos A e B e calcula e imprime a soma de A com B (que lhe são passados como
argumentos).*/
#include"stdio.h"
#include"conio.h"
	
//*********************************************************************************
void somar(int num,int num1)
{
	printf("%d + %d = %d", num,num1,num+num1);

}
//*********************************************************************************
main()
{
	int num,num1;
	
	printf("Diga dois Numeros:\n"); scanf("%d %d",&num,&num1);

	somar(num,num1);
}
