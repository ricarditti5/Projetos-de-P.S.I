/*3. Elabore um programa que implemente uma agenda de contactos, onde será possível inserir,
pesquisar, apagar, alterar e listar todos os contactos inseridos na agenda.
3.1. Defina uma estrutura que permita guardar nome, no de telefone e telemóvel, email e morada do contacto.
3.2. Declare uma variável do tipo de dados AGENDA, que permita guardar 5 contactos.
3.3. Crie um procedimento para limpar todos os contactos, antes de iniciar o programa.
3.4. Elabore um menu que permita executar outras operações pedidas no enunciado: inserir contactos; procurar
contactos; apagar contactos; alterar contactos; listar todos os contactos.*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h" 

#define DIM 2

typedef struct contacto
{
    char nome[30];
    int telefone;
    int telemovel;
    char email[30];
    char morada[30];
}Agenda;
//**********************************************************************
void LIMPAR_CONTACTOS()
{
    system("cls");
}
//**********************************************************************
void inserir_contactos(Agenda num[DIM])
{
    int i;
    for(i=0;i<DIM;i++)
    {
        printf("\nNome:");   fflush(stdin); gets(num[i].nome);
        printf("\nTelefone:");    scanf("%d",&num[i].telefone);
        printf("\nTelemovel:");    scanf("%d",&num[i].telemovel);
        printf("\nEmail:");  fflush(stdin);  gets(num[i].email);
        printf("\nMorada:");     fflush(stdin); gets(num[i].morada);
       
    }
}
//**********************************************************************
void procurar_contactos(Agenda num[DIM])
{
    int i;
    char nome[30];
    printf("\nNome:");    gets(nome);
    for(i=0;i<DIM;i++)
    {
        if(strcmp(nome,num[i].nome)==0)
        {
            printf("\nNome: %s",num[i].nome);
            printf("\nTelefone: %d",num[i].telefone);
            printf("\nTelemovel: %d",num[i].telemovel);
            printf("\nEmail: %s",num[i].email);
            printf("\nMorada: %s",num[i].morada);
            fflush(stdin);
        }
    }
}
//**********************************************************************
void apagar_contactos(Agenda num[DIM])
{
    int i;
    char nome[30];
    printf("\nNome:");    gets(nome);
    for(i=0;i<DIM;i++)
    {
        if(strcmp(nome,num[i].nome)==0)
        {
            strcpy(num[i].nome,"");
            num[i].telefone=0;
            num[i].telemovel=0;
            strcpy(num[i].email,"");
            strcpy(num[i].morada,"");
            fflush(stdin);
        }
    }
}
//**********************************************************************
void alterar_contactos(Agenda num[DIM])
{
    int i;
    char nome[30];
    printf("\nNome:");    gets(nome);
    for(i=0;i<DIM;i++)
    {
        if(strcmp(nome,num[i].nome)==0)
        {
            printf("\nNome:");    gets(num[i].nome);
            fflush(stdin);
            printf("\nTelefone:");    scanf("%d",&num[i].telefone);
            printf("\nTelemovel:");    scanf("%d",&num[i].telemovel);
            printf("\nEmail:");    gets(num[i].email);
            printf("\nMorada:");    gets(num[i].morada);
            fflush(stdin);
        }
    }
}
//**********************************************************************
void listar_contactos(Agenda num[DIM])
{
    int i;
    for(i=0;i<DIM;i++)
    {
        printf("\nNome:");puts(num[i].nome);
        fflush(stdin);
        printf("\nTelefone: %d",num[i].telefone);
        printf("\nTelemovel: %d",num[i].telemovel);
        printf("\nEmail:");puts(num[i].email);
        printf("\nMorada:");puts(num[i].nome);
        fflush(stdin);
    }
}
//**********************************************************************
int MENU()
{
    int op;
   do
   {
    system("cls");
    printf("\nMenu:\n");
    printf("\n1-Inserir Contactos\n");
    printf("\n2-Procurar Contactos\n");
    printf("\n3-Apagar Contactos\n");
    printf("\n4-Alterar Contactos\n");
    printf("\n5-Listar Contactos\n");
    printf("\n0-SAIR\n");
    printf("\nDiga a sua Opcao:");    scanf("%d",&op);
   } while( (op<0) || (op>5));
    {
        printf("Essa opcao esta errada \nDiga a sua opcao [0...5]:");    scanf("%d",&op);
    }
    return(op);
}
//**********************************************************************
main()
{
    Agenda num[DIM];
    int op;

    LIMPAR_CONTACTOS();

        op=MENU();
        printf("\n\n");

        switch(op)
        {
            case 1:     inserir_contactos(num);    break;
            case 2:     procurar_contactos(num);    break;
            case 3:     apagar_contactos(num);    break;
            case 4:     alterar_contactos(num);    break;
            case 5:     listar_contactos(num);    break;
            case 0:     printf("\nObrigado por Utilizar o Nosso Programa\n Ate breve");    break;
        }

        printf("\n\n");
        system("pause");
}