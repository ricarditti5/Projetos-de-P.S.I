/*4. Defina uma estrutura que permita guardar o código de barras de um livro, nome, editora e número
de páginas.
4.1. Declare uma variável do tipo de dados LIVRO.
4.2. Suponha que existe um tipo de dados AUTOR (para guardar o nome e idade do autor do livro). Declare esse tipo
de dados.
4.3. Acrescente ao tipo de dados LIVRO um campo que permita identificar o autor desse livro (deverá ser do tipo de
dados AUTOR).*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

#define lr 1
#define aut 1

typedef struct Autor
{
    char nomeATR[40];
    int iddATR;
}TipoAutor;
//************************************************************
typedef struct Livro
{
    int codLivro;
    char nomeLivro[30];
    char editoraLivro[25];
    int numPag;
    TipoAutor autor; // Added a field of type TipoAutor with the name 'autor'

}TipoLivro;
//*************************************************************

void inicializar(TipoLivro ng[lr],TipoAutor nom[aut])
{
    int i,j;
   
    for(i=0;i<lr;i++)
    {
       for(j=0;j<aut;j++)
       {
        ng[i].codLivro=0;
        strcpy(ng[i].nomeLivro, "-");
        strcpy(ng[i].editoraLivro, "-");
        ng[i].numPag=0;
        strcpy(nom[i].nomeATR,"-");
        nom[i].iddATR=0;
       }

    }
}
//**************************************************************
void LER_DADOS_LIVRO(TipoLivro ng[lr])
{
    int i;

    for(i=0;i<lr;i++)
    {
            printf("\nDiga o Codigo do Livro: "); scanf("%d", &ng[i].codLivro);
            fflush(stdin);
            printf("\nDiga o Nome do Livro: "); gets(ng[i].nomeLivro);
            printf("\nDiga a Editora do Livro: "); gets(ng[i].editoraLivro);
            printf("\nDiga o Numero de Paginas: "); scanf("%d", &ng[i].numPag);
    }
}
//**************************************************************
void MOSTRAR_DADOS(TipoLivro ng[lr],TipoAutor nom[aut])
{
    int i;

        for(i=0;i<aut;i++)
        {
            printf("\nCodigo do Livro: %d", ng[i].codLivro);
            puts(ng[i].nomeLivro);
            fflush(stdin);
            puts(ng[i].editoraLivro);
            fflush(stdin);
            printf("\nNumero de Paginas: %d\n", ng[i].numPag);
            printf("\nNome do Autor: "); 
            puts(nom[i].nomeATR);
            fflush(stdin);
            printf("\nIdade do Autor: %d\n", nom[i].iddATR);
        }
}
//***************************************************************
void MOSTRAR_DADOS_LIVRO(TipoLivro ng[lr])
{
    int i;

    for(i=0;i<lr;i++)
    {
        printf("\nCodigo do Livro: %d", ng[i].codLivro);
        puts(ng[i].nomeLivro);
        fflush(stdin);
        puts(ng[i].editoraLivro);
        fflush(stdin);
        printf("\nNumero de Paginas: %d\n", ng[i].numPag);
    }
}
//**************************************************************
void LER_DADOS_AUTOR(TipoAutor nom[aut])
{
    int i;

        for(i=0;i<aut;i++)
        {
            printf("\nNome do Autor: "); gets(nom[i].nomeATR);
            fflush(stdin);
            printf("\nIdade do Autor: "); scanf("%d", &nom[i].iddATR);
        }
}
void MOSTRAR_DADOS_AUTOR(TipoAutor nom[aut])
{
    int i;

    for(i=0;i<lr;i++)
    {
        printf("\nNome do Autor: "); 
        puts(nom[i].nomeATR);
        fflush(stdin);
        printf("\nIdade do Autor: %d\n", nom[i].iddATR);
    }
} 
//**************************************************************
void MENU(TipoLivro ng[lr], TipoAutor nom[aut])
{
    int op;

    system("cls");
    do
    {
        printf("\n1. Mostrar todos os Dados do Livro\n2. Mostrar todos os Dados do Autor\n3. LER DADOS do AUTOR\n4. MOSTRAR DADOS do LIVRO\n0. Sair\nOpcao: ");
        scanf("%d",&op);

        switch(op)
        {
            case 0: break;
            case 1: MOSTRAR_DADOS_LIVRO(ng); break;
            case 2: MOSTRAR_DADOS_AUTOR(nom); break;
            case 3: LER_DADOS_AUTOR(nom); break;
            case 4: MOSTRAR_DADOS_LIVRO(ng); break;
            default: printf("\nOpcao invalida!"); break;
        }
    system("pause");
    }while(op!=7);
}
//**********************************************************************
int main()
{
    TipoLivro ng[lr];
    TipoAutor nom[aut];
  
            /*Inicializar*/
        inicializar(ng,nom); MOSTRAR_DADOS(ng,nom);
            /*Inserir Dados*/
        LER_DADOS_LIVRO(ng); MOSTRAR_DADOS_LIVRO(ng);
        LER_DADOS_AUTOR(nom); MOSTRAR_DADOS_AUTOR(nom);

    MENU(ng,nom);
}
