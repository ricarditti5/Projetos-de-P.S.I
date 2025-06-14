//ler os dados de um ficheiro chamado notas.txt e ler com o fscanf e imprimir as notas no ecrã.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

main(){
	FILE *fin, *fout;
	char nome[10];
	int res,nota;
	
	fin = fopen("notas.txt","r");

	if(fin == NULL){
		printf("Impossivel abrir o ficheiro notas.txt");
	}
	else{
		printf("Ficheiro aberto\n");
		res=fscanf(fin,"%s %d",nome,&nota);	
		while(res==2){
			printf("\n%s %d",nome,nota);	
			res=fscanf(fin,"%s %d",nome,&nota);	
		}
		
		
		fclose(fin);
	}	
	
}
