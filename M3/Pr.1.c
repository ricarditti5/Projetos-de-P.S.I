#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

void trocar(int a,int b)
{
	int aux;
	
	aux=*a;
	*a=*b;
	*b=*aux;
}
main()
//*************************************************************************************
{
	int a,b;
	
	a=2;
	b=3	
	
	printf("\n %d %d", &a,&b);
	
	trocar(&a,&b);
	
	printf("\n %d %d", &a,&b);
	
}
