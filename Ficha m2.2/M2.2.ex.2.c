/*2. Pedir que o utilizador introduza se � de sexo F-feminino ou M-masculino e, caso ele escreva
um car�cter diferente de F e de M, apare�a a mensagem �introduziu um car�cter inv�lido: responda
com F para feminino ou M para masculino� e leia de novo. No final deve aparecer �� Homem� ou ��
Mulher�.*/
#include"stdio.h"
#include"conio.h"
main()

{
	char sexo;
	
	printf("Diga se e F-Mulher ou M-Homem: ");
	fflush(stdin);
	sexo=getchar();
	
	
	while((sexo!='F') && (sexo!='f') && (sexo!='M') && (sexo!='m'))
	{
		printf("Caraxter invalido\n Diga se e F-Mulher ou M-Homem: ");	
		fflush(stdin);
		sexo=getchar();	
	}
		
	if((sexo=='F') || (sexo=='f'))
	{
		printf("Mulher \n");
	}
	else
	{
		printf("E Homem");
	}
		
		
		
}
