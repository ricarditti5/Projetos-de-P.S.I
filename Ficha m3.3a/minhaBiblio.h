/*1. Utilizando subprogramas (procedimentos e/ou funções) desenvolva o código que complete as
seguintes instruções. No final coloque os subprogramas numa biblioteca chamada minhaBiblio.h.
e guarde tudo numa pasta que será compactada para entregar.

scanf(“%d”, &x); // ver se este tipo de dados serve
inverter(&x);
printf( “%f”, somarFracoes(5) + dobrar(x) - verAbsoluto(-10));

Nota:
somarFracoes é uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o
valor de S, sendo S = 1 + 1/2 + 1/3 + 1/4 + 1/5 +...+ 1/N.
Nota: No caso de os tipos de dados não serem adequados, podem ser feitas adaptações ao código
fornecido acima.*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"math.h"

float somarFracoes(int x)
{

	float soma=0,i;
	
	for(i=1;i<=x;i++)
	{
		soma = soma + (float)1/i;
	}
	
		
	return(soma);
	
}
//***********************************************************************************************************
float dobrar( float x)
{
	float dobro;
	
	dobro=x*2;
	
	return(dobro);
}
//***********************************************************************************************************
float verAbsoluto(float x)
{
	float res;
	
	if(x<0)
	{
		res=x*-1;
	}
	else
	{
		res=x;
	}
	return(res);
}
//***********************************************************************************************************

void inverter(float *x)
{
	(*x)=(float)1/(*x);
}
//***********************************************************************************************************
