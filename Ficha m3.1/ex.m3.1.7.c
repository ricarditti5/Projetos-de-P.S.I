/*7. Completar o extrato de código de modo a obter um programa que funcione:
	printf(“a primeira raiz e: %f”,( -b + sqrt ( (quadrado (b) – prod3( 4,a,c) ) ) / (dobro(a)));
	printf(“a segunda raiz e: %f”,( -b - sqrt ( (quadrado (b) – prod3( 4,a,c) ) ) / (dobro(a)));
NOTA: com os valores a=1, b=3, c=2 obtemos as raízes -1 e -2*/
#include"stdio.h"
#include"conio.h"
#include"MATH.h"

int quadrado(int b)
{
	int res;
	res= b*b;
	return(res);
}
//***************************************************************************
int prod3(int a,int b,int c)
{
	int res;
	res=a*b*c;
	return(res);
}
//***************************************************************************
int dobro(int a)
{
	int res;
	res=a*2;
	return(res);
}
//***************************************************************************
main()
{
	int a,b,c;
	
	printf("Diga um Valor do Coeficiente A:"); scanf("%d",&a);
	printf("Diga um Valor do Coeficiente B:"); scanf("%d",&b);
	printf("Diga um Valor do Coeficiente C:"); scanf("%d",&c);

	printf("A primeira raiz e: %.0f",( -b + sqrt ( (quadrado (b) - prod3( 4,a,c) ) ) )/ (dobro(a)));
	printf("\nA segunda raiz e: %.0f",( -b - sqrt ( (quadrado (b) - prod3( 4,a,c) ) )) / (dobro(a)));
}
