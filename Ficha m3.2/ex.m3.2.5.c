/*5. Fazer um programa que leia / receba 3 notas de um aluno por parâmetro e uma letra. Se a letra
for A a função calcula a média aritmética das notas do aluno, e se for P, a sua média ponderada
(pesos: 5, 3 e 2). No final deve ser impressa a resposta.*/
#include"stdio.h"
#include"conio.h"

float aritmetica(int num1,int num2,int num3)
{
	float resultado;
	
	resultado=((float)num1+num2+num3)/3;
	
	return(resultado);	//(10+11+12)/3 Aritmetica
	
}
//*************************************************************************
int ponderada(int num1,int num2,int num3)
{
	float resultado;
	
	resultado=((float) num1*5+(num2*3)+(num3*2))/(10);
	return(resultado);	//((a*5)+(b*3)+(c*2)/(5+3+2) ponderada
}
//*************************************************************************
main()
{
	int num1,num2,num3;
	float media;
	char tipom;

	printf("Diga uma Nota:");	scanf("%d",&num1);
	printf("Diga uma Nota:");	scanf("%d",&num2);
	printf("Diga uma Nota:");	scanf("%d",&num3);
	
	do
	{
	printf("Diga se e Media Aritmetica(A) ou Media Ponderada(P):"); 
	fflush(stdin);
	tipom=getchar();
			
	}while( (tipom!='a')&&(tipom!='A') && (tipom!='p')&&(tipom!='P') );
		
		if( (tipom=='a')||(tipom=='A') )
	{
		media=aritmetica(num1,num2,num3);
		printf("A media Aritmetica e:%f",media);
	}
		else
		{	
			media=ponderada(num1,num2,num3);
			printf("A media Ponderada e:%f",media);
	}
}
