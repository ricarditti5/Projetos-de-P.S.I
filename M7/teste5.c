#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

main(){
	
	FILE *fin, *fout,*fpositivas,*fnegativas;
	char nome[10];
	int res,nota;
	
	fin = fopen("notas.txt","r");
	fpositivas = fopen("notas_positivas.txt","w");
	fnegativas = fopen("notas_negativos.txt","w");

	if((fin == NULL)||(fpositivas == NULL)||(fnegativas == NULL)){
		printf("Impossivel abrir o ficheiro notas.txt");
	}
	else{
		printf("Ficheiro aberto\n");
		
		res=fscanf(fin,"%s %d",nome,&nota);	
		
		while(res==2){
			
			if(nota>=10){
				
			fprintf(fpositivas, "\n%s %d",nome,nota);	
			}
			else{
					fprintf(fnegativas, "\n%s %d",nome,nota);	
			}
			res=fscanf(fin,"%s %d",nome,&nota);	
		}		
	}
		
	fclose(fin);
	fclose(fpositivas);
	fclose(fnegativas);
}
