/* G. Ler um no N, ler quantos múltiplos desse no o utilizador pretende (X) e imprimir os X
múltiplos de N.
Exemplo: lidos 5 e 3, aparece: 5, 10, 15
Exemplo: lidos 10 e 4, aparece: 10, 20, 30, 40
Algoritmo G
Inicio
 Vars i,Num,mtlp,mtlpcal;
	
	Escrever("Diga um numero");
	Ler(Num);
	
	Escrever("Quantos multiplos queres desse numero?");
	Ler(mtlp);

	Escrever("Os multiplos do Num sao:",Num);
	Para i<-1 ate mtlp fazer
		mtlpcal<-Num*i;
		Escrever("Numeros:",mtlpcal);
Fim
*/

#include"stdio.h"
#include"conio.h"
main()

{
	int i,Num,mtlp,mtlpcal;
	
	printf("Diga um numero: ");
	scanf("%d",&Num);
	
	printf("Quantos multiplos queres desse numero? ");
	scanf("%d",&mtlp);

	printf("\nOs multiplos do %d sao: ",Num);
	for(i=1;i<=mtlp;i++)
	{
		mtlpcal=Num*i;
		printf("\n%d",mtlpcal);
	}
}
