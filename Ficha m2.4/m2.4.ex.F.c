/* F. Escreva um programa que mostre 4 op��es:

OP��ES

1 � somar
2 � subtrair
3 � multiplicar
4 � dividir
DIGA QUAIS A OPERA��O QUE PRETENDE: __

De seguida leia os valores (validando-os) e efectue os c�lculos pretendidos.

DIGA QUAIS S�O OS VALORES PARA A OPERA��O: __
NOTA: fa�a primeiro o algoritmo e depois o programa.
NOTA: Preveja o caso da divis�o por 0.

Algoritmo F
Vars val,val1,ops;
Inicio
	Escrever("Escolha uma op��o"); Ler("ops");
	Escrever("1-Adi��o"); 
	Escrever("2-Subtra��o"); 
	Escrever("3-Multiplica��o"); 
	Escrever("4-Divis�o"); 
	
	Escrever("Diga os Valores quer Calcular"); 
	Ler(val,val2)
	
	Repetir((ops=4) && (val2=0))
		Escrever("Diga o segundo valor(Diferente de 0)"); 
		scanf(val2);	
	Selelcionar(ops)
	
		caso 1:	Escrever("Resultado:",val+val2); break;
		
		caso 2:	Escrever("Resultado:",val-val2); break;
		
		caso 3:	Escrever("Resultado:",val*val2); break;
		
		caso 4:	Escrever("Resultado:",val/val2); break;
		
Fim
	
*/
#include"stdio.h"
#include"conio.h"
main()
{
	int i,val,val2, ops;
	float vlr;
	
	printf("1-Adicao\n");
	printf("2-Subtracao\n");
	printf("3-Multiplicacao\n");
	printf("4-Divisao\n");
	printf("Escolha uma opcao:"); scanf("%d", &ops);
	
	printf("\nDiga os Valores quer Calcular:\n"); 
	scanf("%d %d",&val,&val2);

	while((ops==4) && (val2==0))
	{
		printf("\nDiga o segundo valor(Diferente de 0):\n"); 
		scanf("%d",&val2);	
	}

	switch(ops)
	{
		case 1:	printf("\nResultado: %d",val+val2);	break;
		
		case 2:	printf("\nResultado: %d",val-val2);	break;
		
		case 3:	printf("\nResultado: %d",val*val2);	break;
		
		case 4:	printf("\nResultado: %.2f",(float)val/val2);	break;
	
		
}
	

}
