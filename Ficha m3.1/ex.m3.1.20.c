/*20. Completar o extrato de código de modo a obter um programa que funcione:
printf(“a primeira raiz e: %f”,( -b + sqrt ( (quadrado (b) – prod3( 4,a,c) ) ) / (dobro(a)));
printf(“a segunda raiz e: %f”,( -b - sqrt ( (quadrado (b) – prod3( 4,a,c) ) ) / (dobro(a)));
NOTA: com os valores a=1, b=3, c=2 obtemos as raízes -1 e -2*/
#include"stdio.h"
#include"conio.h"
#include"MATH.h"

int quadrado(int num1)
{
	int res;
	res= num1*num1;
	return(res);
}
//******************************************************************************
int prod3(int num,int num1,int num2)
{
	int res;
	res=num*num1*num2;
	return(res);
}
//******************************************************************************
int dobro(int num)
{
	int res;
	res=num*2;
	return(res);
}
//******************************************************************************

main()
{
	int num,num1,num2;
	
	printf("Diga um Valor do Coeficiente Primeiro Numero:"); scanf("%d",&num);
	printf("Diga um Valor do Coeficiente Segundo Numero:"); scanf("%d",&num1);
	printf("Diga um Valor do Coeficiente Terceiro Numero:"); scanf("%d",&num2);

	printf("A primeira raiz e: %.0f",( -num1 + sqrt ( (quadrado (num1) - prod3( 4,num,num2) ) ) )/ (dobro(num)));
	printf("\nA segunda raiz e: %.0f",( -num1 - sqrt ( (quadrado (num1) - prod3( 4,num,num2) ) )) / (dobro(num)));
}
