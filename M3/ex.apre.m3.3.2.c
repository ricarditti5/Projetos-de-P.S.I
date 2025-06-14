/*1. Utilizando subprogramas (procedimentos e/ou fun��es) desenvolva o c�digo que complete as
segufloates instru��es. No final coloque os subprogramas numa biblioteca chamada minhaBiblio.h.
e guarde tudo numa pasta que ser� compactada para entregar.
scanf(�%f�, &x); // ver se este tipo de dados serve
inverter(&x);
prfloatf( �%f�, somarFracoes(5) + dobrar(x) - verAbsoluto(-10));

Nota:
somarFracoes � uma fun��o que recebe por par�metro um valor floateiro e positivo N e retorna o
valor de S, sendo S = 1 + 1/2 + 1/3 + 1/4 + 1/5 +...+ 1/N.
Nota: No caso de os tipos de dados n�o serem adequados, podem ser feitas adapta��es ao c�digo
fornecido acima.*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"math.h"

void dobrar(float *a)
{
	(*a)=(*a)*2;
}
//******************************************************************************
void transformarAbs(float *a)
{
	if(	(*a)<0)
	{
		(*a)=(*a)*-1;
	}
}
//******************************************************************************
float inverter(float *a)
{
		(*a)=1/(*a);
}
//******************************************************************************
main()
{
	float a=-5;
	printf("\n %f",a);
	
	dobrar(&a);				printf("\n %f",a);
	transformarAbs(&a);		printf("\n %f",a);
	inverter(&a);			printf("\n %f",a);

}
