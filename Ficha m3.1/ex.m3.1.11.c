/*11. Fazer um programa que leia 4 números e chame um procedimento TOTAL que leva como
argumentos esses números e calcula e imprime a respetiva soma.*/
#include"stdio.h"
#include"conio.h"

//*********************************************************************************
void somar(int num,int num1,int num2,int num3)
{
	int res; 
	
	res=num+num1+num2+num3;
	printf("%d + %d + %d + %d = %d", num,num1,num2,num3,res);

}
//*********************************************************************************
main()
{
	int num,num1,num2,num3,res;
	
	printf("Diga Quatro Numeros:\n"); scanf("%d %d %d %d",&num,&num1,&num2,&num3);

	somar(num,num1,num2,num3);
}
