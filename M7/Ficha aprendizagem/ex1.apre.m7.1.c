/*1. Fazer programas para criar, no ambiente de trabalho, respetivamente:
1.1. um ficheiro "lusiadas.txt" com o texto "As armas e os barões...
1.2. um ficheiro cujos nome e texto são dados pelo utilizador,
NOTA: ao nome acrescente a extensão ".txt"*/

#include"stdio.h"
#include"conio.h"
#include"string.h"


main(){
    FILE *fp1;

    char fp[40], ae[200];

    

    printf("Nome do ficheiro: ");
    fflush(stdin);
    gets(fp);
    strcat(fp,".txt");

    fp1 = fopen(fp,"w");
    
    if(fp1==NULL)
	{
        printf("Impossivel abrir o ficheiro");
    }
    else
    {
   		printf("Diga o que quer inserir no ficheiro:\n");
   		fflush(stdin);
    	gets(ae);

    	fprintf(fp1,"%s",ae);
    	fclose(fp1);
    }
}
