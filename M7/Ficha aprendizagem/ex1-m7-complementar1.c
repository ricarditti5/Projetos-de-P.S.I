
/*1. Defina uma estrutura de dados,tipoPessoa, que permita guardar o NIF e o nome de uma pessoa.
1.1. Complete o programa seguinte:
main()
{
tipoPessoa x;
inicializar1 (&x);
imprimir1 (x);
ler1 (&x);
imprimir1 (x);
}*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

#define DIM 1

typedef struct
{
    char nome[50];
    int nif;
}tipoPessoa;
//********************************************************************************
void imprimir1(tipoPessoa x)
{
    printf("\nNome: %s\t", x.nome);
 //   puts(x.nome);
    printf("\nNIF:%d",x.nif);
    printf("\n\n");
}
//********************************************************************************
void ler1(tipoPessoa *x)
{
    printf("\nDiga o Nome:");
    fflush(stdin);
    gets((*x).nome);
    printf("\nDiga o NIF:"); scanf("%d",&(*x).nif);
}
//********************************************************************************
void gravar_no_ficheiro(tipoPessoa x){
    FILE *fp;

    fp = fopen("dados.dat","wb");

    if(fp == NULL){
        printf("O ficheiro não está criado");
    }
    else{
    fwrite(&x,sizeof(tipoPessoa),DIM,fp);
    fclose(fp);
    }
}
//********************************************************************************
void ler_do_ficheiro(tipoPessoa *y){
    FILE *fp;

    fp = fopen("dados.dat","rb");

    if(fp == NULL){
        printf("O ficheiro nao esta� Disponivel");
    }
    else{
    fread(&(*y),sizeof(tipoPessoa),DIM,fp);
    fclose(fp);
    }
}
//********************************************************************************
main()
{

    tipoPessoa x,y;

    printf("\nLer");
    ler1 (&x);

    printf("\n*************Gravar no ficheiro*************");
    gravar_no_ficheiro (x);
    
    printf("\n*************Ler do ficheiro*************");
    ler_do_ficheiro (&y);
    printf("\nMostrar");
    imprimir1 (y);

}
