/*2. Fazer programas para ler, do ambiente de trabalho, respetivamente, todo o texto de um ficheiro e
imprimi-lo no ecrã, sabendo que:
2.1. o nome do ficheiro é "lusiadas.txt"
2.2. o nome do ficheiro é dado pelo utilizador.*/

#include"conio.h"
#include"stdio.h"
#include"string.h"

main(){
	FILE *fp1;

    char fp[40], ae[200];
    int ch;


//    printf("Nome do ficheiro: ");    fflush(stdin);    gets(fp);    strcat(fp,".txt");

    fp1 = fopen("lusiadas.txt","r");
    
    if(fp1==NULL)
	{
        printf("Impossivel abrir o ficheiro");
    }
    else
    {
   		ch = fgetc(fp1);
   		while(ch!=EOF){
   			 printf("%c",ch);
   			ch = fgetc(fp1);
		   }
		  
    	fclose(fp1);
    }
}
