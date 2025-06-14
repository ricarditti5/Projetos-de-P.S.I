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

#include"minhaBiblio.h"
main()
{


	float res,x;
	
	printf("Diga um Numero:");	scanf("\n%f",&x); // ver se este tipo de dados serve

	inverter(&x);			printf("\n %f",x);
	res=somarFracoes(5); 	printf("\n %f",res);
	res=dobrar(x);			printf("\n %d",res);
	res=verAbsoluto(x);		printf("\n %f",res);

//	fim
	printf( "\nResultado Final: %f", somarFracoes(5) + dobrar(x) -verAbsoluto(-10));
}
