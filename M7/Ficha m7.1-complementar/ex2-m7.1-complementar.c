/*2. Copie o programa anterior e altere-o para que mostre só os alunos que têm notas negativas*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"



main(){
	FILE *fin;
	char nome[80];
	int res,nota;
	
	fin = fopen("notas10P2.txt","r");

	if((fin == NULL))
	{
		printf("Impossivel abrir o ficheiro notas.txt");
	}
	else
	{
		printf("Ficheiro aberto\n");
		
		res=fscanf(fin,"%s %d",nome,&nota);	
		
		while(res==2)
		{
			
			if(nota<10)
			{
				
				printf("\n%s %d",nome,nota);	
		
			}		
			res=fscanf(fin,"%s %d",nome,&nota);		
		}
		
		fclose(fin);
	}
}
