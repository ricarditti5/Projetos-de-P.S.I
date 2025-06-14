//Fazer um programa que leia todos os caracteres de um ficheiro chamado dados.txt e os coloquenoutro ficheiro chamado copia_dados.txt.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

main(){
	
	FILE *fin, *fout;
	int ch;
	
	fin = fopen("dados.txt","r");
	fout = fopen("copia_dados.txt","w");
	
	if(fin == NULL){
		printf("Impossivel abrir o ficheiro %s\n","dados");
	}	
	else{
		if(fout == NULL){
			printf("Impossivel criar o ficheiro %s\n","copia_dados");
		}
		else{
			
			ch = fgetc(fin);
			
			while(ch != EOF){
				fputc(ch, fout);
			}
			puts("FIcheiro copiado");
			fclose(fout);
		}
	}
}
