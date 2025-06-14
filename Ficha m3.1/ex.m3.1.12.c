/*12. Fazer um procedimento que dado o ano como argumento, imprime uma mensagem desejando
Feliz Ano.*/
#include"conio.h"
#include"stdio.h"

void mostrarFelizAno(int  year)
{
	printf("\n********************");
	printf("\n*********Feliz Ano de %d***********",year);
	printf("\n********************");
}
//**************************************************************
main()
{
	int year;
	
	printf("Diga o Ano Actual: "); scanf("%d",&year);
	mostrarFelizAno(year);
}
