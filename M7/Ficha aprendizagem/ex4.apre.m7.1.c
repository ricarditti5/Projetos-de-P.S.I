/*4. Fazer um programa para copiar e modificar o programa anterior para que crie um novo ficheiro,
cujo conteúdo é o que aparece no ecrã (codificado) e cujo nome é o mesmo com mais uma
palavra “-codificado”.*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"


void maiusculas(int *ch){
	if(((*ch)>='a') && ((*ch)<='z')){
		(*ch) = (*ch) - 32;
	}
}
//************************************************************************************
main(){
	FILE *af,*afc;

    char nomef[40];
    char nomec[80];
    int ch;


    printf("Nome do ficheiro: ");    fflush(stdin);    gets(nomef);    
    strcpy(nomec,nomef);
	strcat(nomec,"-codificado.txt");
	strcat(nomef,".txt");
	
    af = fopen(nomef,"r");
    afc = fopen(nomec,"w");
    
    if(af==NULL)
	{
        printf("Impossivel abrir o ficheiro");
    }
    else
    {
    	printf("Ficheiro copiado com sucesso\n\n");
   		ch = fgetc(af);
   		while(ch!=EOF){
   			maiusculas(&ch);
   			switch(ch){
   				case 'A':ch = '4'; break;
   				case 'E':ch = '3'; break;
   				case 'I':ch = '1'; break;
   				case 'O':ch = '0'; break;
//   				case 'u':ch = 'u'; break;
			   }
			printf("%c",ch);
		 	fprintf(afc,"%c",ch);
   			ch = fgetc(af);
   			
		   }
    	fclose(af);
    	fclose(afc);
    }
}
