/*3. Fazer um programa para ler todo o texto de um ficheiro cujo nome é dado pelo utilizador
(assuma que o ficheiro está no ambiente de trabalho), e imprimi-lo no ecrã, depois de o codificar
da seguinte forma: coloca-se todas as letras em maiúsculas e as vogais transformam-se em
números: a-4,e-3,i-1, o-0, u-u).*/

#include"stdio.h"
#include"conio.h"
#include"string.h"



void maiusculas(int *ch){
	if(((*ch)>='a') && ((*ch)<='z')){
		(*ch) = (*ch) - 32;
	}
}

//************************************************************************************
main(){
	FILE *af;

    char nomef[40];
    int ch;


    printf("Nome do ficheiro: ");    fflush(stdin);    gets(nomef);    strcat(nomef,".txt");

    af = fopen(nomef,"r");
    
    if(af==NULL)
	{
        printf("Impossivel abrir o ficheiro");
    }
    else
    {
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
   			ch = fgetc(af);
		   }
    	fclose(af);
    }
}
