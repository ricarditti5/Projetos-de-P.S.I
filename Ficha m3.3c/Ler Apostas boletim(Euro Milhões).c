#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"math.h"

#define Max 50

main()
{
	int a1,a2,a3,a4,a5,ae1,ae2;
	
	do
	{
		printf("Diga o Valor do Primeiro Numero entre 1 a 50: "); scanf("%d",&a1);
		if(a1<=0||a1>50)
		{
			printf("\nNumero Invalido");
		}
	}	while((a1>50)||(a1<=0));
//*********************************************************************************************
	do
	{
		printf("\nDiga o Valor do Segundo Numero entre 1 a 50: "); scanf("%d",&a2);
		if(a2<=0||a2>50 || a2==a1)
		{
			printf("\nNumero Invalido");
		}
	}	while((a2>50)||(a2<=0) || a2==a1);
//*********************************************************************************************
	do
	{
		printf("\nDiga o Valor do Terceiro Numero entre 1 a 50: "); scanf("%d",&a3);
		if(a3<=0||a3>50 || a3==a1 ||a3==a2)
		{
			printf("\nNumero Invalido");
		}
	}	while(a3<=0||a3>50 || a3==a1 ||a3==a2);
//*********************************************************************************************
	do
	{
		printf("\nDiga o Valor do Quarto Numero entre 1 a 50: "); scanf("%d",&a4);
		if(a4<=0||a4>50 || a4==a1 ||a4==a2 || a4==a3)
		{
			printf("\nNumero Invalido");
		}
	}	while(a4<=0||a4>50 || a4==a1 ||a4==a2 || a4==a3);
//*********************************************************************************************
	do
	{
		printf("\nDiga o Valor do Quinto Numero entre 1 a 50: "); scanf("%d",&a5);
		if(a5<=0||a5>50 || a5==a1 ||a5==a2 || a5==a3  || a5==a4)
		{
				printf("\nNumero Invalido");
		}
	}	while(a5<=0||a5>50 || a5==a1 ||a5==a2 || a5==a3  || a5==a4);
//************************************************************************************************+
do
	{
		printf("\nDiga o Valor da Primeira Estrela entre 1 a 12: "); scanf("%d",&ae1);
		if(ae1<=0||ae1>50)
		{
			printf("\nNumero Invalido");
		}
	}	while(ae1<=0||ae1>50);
//****************************************************************************
do
	{
		printf("\nDiga o Valor da Segunda Estrela entre 1 a 12: "); scanf("%d",&ae2);
		if(ae2<=0||ae2>50 || ae2==ae1)
		{
			printf("\nNumero Invalido");
		}
	}	while(ae2<=0||ae2>50 || ae2==ae1);

		printf("\nOs Valores do Numeros sao:%d %d %d %d %d",a1,a2,a3,a4,a5);

		printf("\nOs Valores das Estrelas sao:%d %d ",ae1,ae2);
}

