//Fazer um programa que leia todos os caracteres de um ficheiro chamado dados.txt e imprime no ecrã.
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

main(){
    FILE *fp; 
    int ch;

    fp = fopen("dados.txt","r");

    if(fp == NULL){
        printf("Impossivel abrir o ficheiro %s", "dados.txt");
    }
    else{
        printf("Ficheiro %s aberto com sucesso\n", "dados.txt");

        ch = fgetc(fp);

        while(ch!=EOF){
            putchar(ch);
            ch = fgetc(fp);
        }
        fclose(fp);
    }

}
