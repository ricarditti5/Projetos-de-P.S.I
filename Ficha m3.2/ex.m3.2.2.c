/*2. Copiar o programa anterior e adicionar mais uma op��o �0- Sair� e modificar o programa de
forma a que ele continue a executar (repita a impress�o/leitura/ac�o do menu) at� ser premido o
0.
SUGEST�O: Fa�a uma fun��o menu que imprime as op��es, l� e valida a op��o do utilizador e
depois devolve a op��o validada.*/
#include"stdio.h"
#include"conio.h"
#define PI 3.141592653
int menu()
{
	int ops;
	
	printf("---------------------Menu---------------------");
	printf("\n0-Sair");
	printf("\n1-Calcular a area do quadrado");
	printf("\n2-Calcular a area do rectangulo");
	printf("\n3-Calcular a area do trapezio");
	printf("\n4-Calcular a area do circulo");
	printf("\nDiga a Sua Opcao:"); scanf("%d",&ops);
	
	return(ops);
}


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
	
	printf("\nDiga os Seguintes Valores do Trapezio: \nBase Menor:  \nBase Maior:  \nAltura: ");	scanf("%d %d %d",&b,&h,&B);
	res=(float)((b+B)*h)/2;
	printf("Resultado Final:%f",res);
}
//*******************************************************
float proc4()
{
	int r;
	float res;
	printf("Diga o Raio do Circulo: "); scanf("%d", &r);
	res=(PI*(r*r));
	
	printf("Resultado Final: %f",res);
	
	return(res);
}
//*******************************************************
main()
{
	int ops,res;
	float aTrp,aCrl;

	ops=menu();
	switch(ops)
	{
		case 0: break;
		case 1: proc1();break;
		case 2: proc2();break;
		case 3: proc3();break;
		case 4: proc4();break;
		
	
		default: printf("\nOpcao Errada \nSelecione uma das Opcoes:"); getch();
	}	
}
