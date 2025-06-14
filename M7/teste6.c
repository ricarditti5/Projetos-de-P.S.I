#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"
main(){
	
	FILE *fin, *fout;
	int ch;
	char nomeFicheiro[40];
	char nomeCopia[80];
	
	puts("Introduza o Nome do Ficheiro:\n");fflush(stdin); gets(nomeFicheiro);
	
	strcpy(nomeCopia,nomeFicheiro);
	strcat(nomeFicheiro,".txt");
	strcat(nomeCopia,"-copia.txt");
	
	fprintf("Nomes: %s",nomeFicheiro);
	
	getch();
	
//	
//	fin = fopen(nomeFicheiro,"r");
//	fout = fopen(nomeCopia,"w");
//	
//	if(fin == NULL){
//		printf("Impossivel abrir o ficheiro %s\n","dados");
//	}	
//	else{
//		if(fout == NULL){
//			printf("Impossivel criar o ficheiro %s\n","copia_dados");
//		}
//		else{
//			
//			ch = fgetc(fin);
//			
//			while(ch != EOF){
//				fputc(ch, fout);
//			}
//			puts("FIcheiro copiado");
//			fclose(fout);
//		}
//	}
}
