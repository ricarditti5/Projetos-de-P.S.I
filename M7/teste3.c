//Fazer um programa que leia todos os caracteres de um ficheiro chamado dados.txt e os coloquenoutro ficheiro chamado copia_dados.txt usando as funções fscanf e fprintf.
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

main(){
	
	FILE *fin, *fout;
	int ch,res;
	
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
			
			res = fscanf(fin,"%c",&ch);
			
			while(res != EOF){
				fprintf(fout,"%c",ch);
				res = fscanf(fin,"%c",&ch);
			}
			puts("FIcheiro copiado");
			fclose(fout);
		}
	}
}
