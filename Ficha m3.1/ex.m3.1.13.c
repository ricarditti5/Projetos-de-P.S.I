/*13. Complemente o programa anterior, com um outro procedimento que dado o ano como
argumento, imprime uma mensagem �O �ltimo Natal foi no ano de *** e o pr�ximo ser� em
***�.*/
#include"stdio.h"
#include"conio.h"

void mostrarFelizAno()
{
	printf("\n********************");
	printf("\n*********Feliz Ano***********");
	printf("\n********************");
}
//**************************************************************
main()
{
	int year;
	
	printf("\nDiga o Ano Actual: "); scanf("%d",&year);

	mostrarFelizAno();
	
	printf("\nO Ultimo Natal foi em: %d",year-1);
	printf("\nO Proximo Natal foi em: %d",year+1);

	
}
