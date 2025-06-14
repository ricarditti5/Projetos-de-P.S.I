/*19. Fazer as funções exigidas pela seguinte instrução: res = quadrado ( dobro(x) ) + potencia (2,3);*/
#include"stdio.h"
#include"conio.h"

int dobro(int x)
{
	return(x*2);
}
//******************************************************************************
int potencia()
{
	return(2*2*2);
}
//******************************************************************************
int quadrado(int res)
{
	
	return(res*res);
}
//******************************************************************************
main()
{
	int x, res, res1;
	
	printf("Diga um numero: ");
	scanf("%d", &x);
	
	res=dobro(x);
	res1=potencia();
	res=quadrado(res);
	
	printf("%d", res + res1);
}
