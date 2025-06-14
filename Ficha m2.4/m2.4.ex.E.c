/*E. Escreva um programa que leia uma lt (validando-a) e, usando um CASE, escreva:
para vogais - “VOGAL”; para consoantes - “CONSOANTE”
NOTA: faça primeiro o algoritmo e depois o programa. 

 Algoritmo m2.4.E
Início
Vars lt

	Escrever("digite um caracter")
	Ler ("lt")

	Repetir(lt <>((A-Z) ou (a-z)) )
	Escrever("Isto não é uma letra")

	Escrever("digite um letra")
	Ler ("lt")

	Selecionar(lt):
	
	caso 'A': Escrever("Vogal"); quebrar;
	caso 'a': Escrever("Vogal"); quebrar;
	caso 'E': Escrever("Vogal"); quebrar;
	caso 'e': Escrever("Vogal"); quebrar;
	caso 'I': Escrever("Vogal"); quebrar;
	caso 'i': Escrever("Vogal"); quebrar;
	caso 'O': Escrever("Vogal"); quebrar;
	caso 'o': Escrever("Vogal"); quebrar;
	caso 'U': Escrever("Vogal"); quebrar;
	caso 'u': Escrever("Vogal"); quebrar;
		predefinição: printf("Consoante");
Fim
*/	
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
main()
{
	int lt;
	
		
		printf("\nDigite um  Caracter: ");
		fflush(stdin);
		lt=getchar();
		
		
		while(  ! (((lt>='A') && (lt<='Z')) || ((lt>='a') && (lt<='z'))) )
		{
			printf("\nIsto nao e uma letra \nDigite uma letra: ");
			fflush(stdin);
			lt=getchar();
		}
	
		
		switch(lt)
		{
			case 'A': printf("\n Vogal"); break;
			case 'a': printf("\n Vogal"); break;
			case 'E': printf("\n Vogal"); break;
			case 'e': printf("\n Vogal"); break;
			case 'I': printf("\n Vogal"); break;
			case 'i': printf("\n Vogal"); break;
			case 'O': printf("\n Vogal"); break;
			case 'o': printf("\n Vogal"); break;
			case 'U': printf("\n Vogal"); break;
			case 'u': printf("\n Vogal"); break;
			default: printf("\n E Consoante"); 
		}
		
		
		
	}








