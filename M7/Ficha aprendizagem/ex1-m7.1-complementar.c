/*1. Criar um programa que leia os dados de um ficheiro de texto pr�-existente (com os dados
mostrados a seguir) e mostre no ecr� todos os alunos que tiverem positiva. Isto �, cada vez que
for lida do ficheiro uma nota superior a 9, deve ser mostrada no ecr� a nota o nome do
aluno.respetivo.
NOTA: O ficheiro tem que ser criado antes (usando o bloco de notas ou outro programa para
escrever texto simples), pode chamar-se, por exemplo �notas10P2.txt�, e tem que ter os seguintes
dados l� escritos como texto

Ana 10
Joaquim 20
Sofia 19
Rui 7

NOTA: Use a fun��o fscanf para ler os dados do ficheiro
NOTA: Pode melhorar o programa, prevendo o caso de n�o haver positivas (use uma flag)*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

main(){
	FILE *fin,*fpositivas;
	char nome[10];
	int res,nota;
	
	fin = fopen("notas10P2.txt","r");
	
	if((fin == NULL)){
		printf("Impossivel abrir o ficheiro notas.txt");
	}
	else{
		printf("Ficheiro aberto\n");
		
		res=fscanf(fin,"%s %d",nome,&nota);	
		
		while(res==2){
			
			if(nota>=9){
				
			printf(fin, "\n%s %d",nome,nota);	
			res=fscanf(fin,"%s %d",nome,&nota);	
		}
		else{
			break;
			getch();
		}		
	}
		
	fclose(fin);
	fclose(fpositivas);
}
}
