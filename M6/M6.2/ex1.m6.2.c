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

typedef struct
{
    char nome[50];
    int nif;
}tipoPessoa;

void inicializar1(tipoPessoa *x)
{
    strcpy((*x).nome, "none");
    (*x).nif = 0;
}
//********************************************************************************
void imprimir1(tipoPessoa x)
{
    printf("\nNome:\t");
    puts(x.nome);
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
main()
{

    tipoPessoa x;

    printf("\nInicializado");
    inicializar1 (&x);
    imprimir1 (x);
    printf("\nLer");
    ler1 (&x);
    printf("\nMostrar");
    imprimir1 (x);
}