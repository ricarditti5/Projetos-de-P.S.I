/*1. Fazer um programa com 4 opções:
1 – Calcular a area do quadrado
2 – Calcular a area do rectângulo
3 – Calcular a area do trapézio
4 – Calcular a area do círculo
Ler e validar a opção pretendida e depois chamar o procedimento que faz o que foi escolhido.*/
#include"stdio.h"
#include"conio.h"
#define PI 3,141592653

void proc1()
{
	int val1,res;
	
	printf("\nDiga o lado do Quadrado:");	scanf("%d",&val1);
	res=val1*val1;
	printf("Resultado Final:%d",res);
		
}
//*******************************************************
void proc2()
{
	int b,h,res;
	
	printf("\nDiga os Seguintes Valores do Retangulo: \nBase: ");	scanf(" %d",&b);
	printf("\nDiga os Seguintes Valores do Retangulo: \nAltura: ");	scanf(" %d",&h);
	res=b*h;
	printf("Resultado Final:%d",res);
}
//*******************************************************
void proc3()
{
	int b,B,h;
	float res;
	
	printf("\nDiga os Valores do Trapezio: \n ");
	printf("\nBase Menor: ");
	scanf("%d",&b);
	
	printf("\nBase Maior: ");
	scanf("%d",&B);
	
	printf("\nAltura: ");
	scanf("%d",&h);
	
	res=(float)((b+B)*h)/2;
	printf("Resultado Final:%f",res);
}
//*******************************************************
void proc4()
{
	int r;
	float res;
	printf("Diga o Raio do Circulo: "); scanf("%d", &r);
	res=PI*r*r;
	printf("Resultado Final:%f",res);
}
//*******************************************************
main()
{
	int ops,res;
	float aTrp,aCrl;
	
	printf("\n1-Calcular a area do quadrado");
	printf("\n2-Calcular a area do rectangulo");
	printf("\n3-Calcular a area do trapezio");
	printf("\n4-Calcular a area do circulo");
	printf("\nDiga a Sua Opcao:"); scanf("%d",&ops);
	
	switch(ops)
	{
		case 1: proc1();break;
		case 2: proc2();break;
		case 3: proc3();break;
		case 4: proc4();break;
	
		default: printf("\nOpcao Errada \nSelecione uma das Opcoes:"); getch();
	}	
		
	
	
}
