#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"


#define DIM 2

main(){
	FILE *fp;
	int i,v[DIM];
	
	for(i = 0; i < DIM; i++){
		printf("Introduza o %d-esimo No:",i+1);
		scanf("%d",&v[i]);
	}
	if((fp = fopen("DADOS.DAT","wb"))==NULL){
		printf("Impossivel Criar o ficheiro %s\n","DADOS.txt");
	}
		else{
			if(fwrite(v,sizeof(int),DIM,fp)!=DIM){
				fprintf(stderr,"Nao foram escritos todos os elementos!!!\n");
				printf("Nao foram escritos todos os elementos!!!\n");
			}
		}
		fclose(fp);
}
