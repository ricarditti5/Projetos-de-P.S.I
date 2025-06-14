/*6. Defina uma estrutura que permita guardar o nome de um artigo, a quantidade em stock, o preço
unitário e o valor de IVA.
6.1. Crie um array para guardar 5 elementos deste tipo de estrutura.
6.2. Elabore um programa que permita a inserção de valores no array criado no item anterior.
6.3. Elabore um procedimento que permita mostrar os dados de todos os artigos.
6.4. Elabore um procedimento que permita calcular e depois imprimir o preço médio de cada artigo.
6.5. Elabore um procedimento que permita calcular e depois imprimir a quantidade total de produtos existem em
stock.
6.6. Elabore um procedimento que permita, a partir da introdução do nome de um artigo, mostrar todos os dados
referentes a esse produto.
6.7. Elabore um procedimento que permita contar e depois imprimir quantos artigos tem iva de 20%.
6.8. Elabore um procedimento que permita imprimir todos os artigos com um dado valor de iva.*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

#define DIM 2

typedef struct Artigos 
{
    char nomeA[50];
    int stock;
    float preco;
    float iva;
} TipoArtigos;
//*****************************************************
void preencher(TipoArtigos ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nDiga o Nome do Artigo:"); gets(ar[i].nomeA);
        printf("\nDiga o Stock do Artigo:"); scanf("%d",&ar[i].stock);
        printf("\nDiga o Preco do Artigo:"); scanf("%f",&ar[i].preco);
        printf("\nDiga o IVA do Artigo:"); scanf("%f",&ar[i].iva);
        fflush(stdin);
    }
}
//*****************************************************
void mostrar(TipoArtigos ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nArtigo:\t\n");
        puts(ar[i].nomeA);
        printf("\nStock:%d",ar[i].stock);
        printf("\nPreco:%f",ar[i].preco);
        printf("\nIVA:%f\n",ar[i].iva);
        fflush(stdin);
    }
}
//*****************************************************
void PRECO_MEDIO(TipoArtigos ar[DIM])
{
    int i;
    float media=0;

    for(i=0;i<DIM;i++)
    {
        media=media+ar[i].iva;
    }
    printf("A Media e:%.2f",media/DIM);
    printf("\n\n");
}
//*****************************************************
/*Elabore um procedimento que permita calcular e depois imprimir a quantidade total de produtos existem em
stock.*/
void QUANTIDADE_TOTAL_STOCK(TipoArtigos ar[DIM])
{
    int i,quantidade=0;

    for(i=0;i<DIM;i++)
    {
        quantidade=quantidade+ar[i].stock;
    }
    printf("\n\nA quantidade total em stock e:%d",quantidade);
    printf("\n\n");
}
//**********************************************************************
/*6.6. Elabore um procedimento que permita, a partir da introdução do nome de um artigo, mostrar todos os dados
referentes a esse produto.*/
void MOSTRAR_ARTIGO(TipoArtigos ar[DIM])
{
    char nome[50];
    int i, existe=0;

    printf("\nIntroduza o nome do artigo a pesquisar: ");
    fflush(stdin);gets(nome);

    for(i=0;i<DIM;i++)
    {
        if(strcmp(nome,ar[i].nomeA)==0)
        {
            printf("\nArtigo:\t\n");
            puts(ar[i].nomeA);
            printf("\nStock:%d",ar[i].stock);
            printf("\nPreco:%f",ar[i].preco);
            printf("\nIVA:%f",ar[i].iva);
        }
    }
    if(existe==0)
    {
        printf("\nArtigo nao Encontrado!");
    }
    printf("\n\n");
}
//**********************************************************************
/*6.7. Elabore um procedimento que permita contar e depois imprimir quantos artigos tem iva de 20%.*/
void IVA_20(TipoArtigos ar[DIM])
{
    int i,conta=0;

    for(i=0;i<DIM;i++)
    {
        if(ar[i].iva==20)
        {
            conta++;
        }
    }
    printf("Existem %d artigos com iva a 20 Por cento",conta);
    printf("\n\n");
}
//**********************************************************************
/*6.8. Elabore um procedimento que permita imprimir todos os artigos com um dado valor de iva.*/
void MOSTRAR_IVA(TipoArtigos ar[DIM])
{
    int i;
    float iva;

    printf("\nIntroduza o valor do IVA a pesquisar: ");
    scanf("%f",&iva);

    for(i=0;i<DIM;i++)
    {
        if(iva==ar[i].iva)
        {
            printf("\n\nArtigo:\n\n");
            puts(ar[i].nomeA);
            printf("\nStock:%d",ar[i].stock);
            printf("\nPreco:%f",ar[i].preco);
            printf("\nIVA:%f",ar[i].iva);
        }
    }
    printf("\n\n");
}
//**********************************************************************
void menu(TipoArtigos ar[DIM])
{
    int op;

    system("cls");
    do
    {
        printf("\n1. Mostrar todos os artigos\n2. Preco medio dos artigos\n3. Quantidade total em stock\n4. Mostrar artigo por nome\n5. Contar artigos com IVA de 20%%\n6. Mostrar artigos por valor de IVA\n7. Sair\nOpcao: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1: mostrar(ar); break;
            case 2: PRECO_MEDIO(ar); break;
            case 3: QUANTIDADE_TOTAL_STOCK(ar); break;
            case 4: MOSTRAR_ARTIGO(ar); break;
            case 5: IVA_20(ar); break;
            case 6: MOSTRAR_IVA(ar); break;
            case 7: printf("\nSaindo do programa..."); break;
            default: printf("\nOpcao invalida!"); break;
        }
    system("pause");
    }while(op!=7);
}
//**********************************************************************
main()
{
    TipoArtigos  ar[DIM];

    preencher(ar);
    mostrar(ar);
    menu(ar);
    /*Procedimentos e Funções complexas*/
    PRECO_MEDIO(ar);
    QUANTIDADE_TOTAL_STOCK(ar);
    MOSTRAR_ARTIGO(ar);
    IVA_20(ar);
    MOSTRAR_IVA(ar);
}