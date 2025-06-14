/*Fazer o mesmo que o exercicio anterior mas com Nomes*/
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"

#define DIM 5
#define MAX_NOMES 50

typedef struct 
{
    char nome[MAX_NOMES]; 
} tnome;

typedef struct 
{
    int ni; 
    tnome elementos[DIM];
} tpilhas;

void inicializar(tpilhas *x)
{
    int i;
    (*x).ni=0;
    for(i=0;i<DIM;i++)
    { 
        strcpy((*x).elementos[i].nome, "-");
    }
}

int menu()
{
    int op;
    do
    {
        system("cls");
        puts("OPCOES:");
        puts("\t1- listar todos os dados");
        puts("\t2- ler novos dados");
        puts("\t3- Retirar dados");
        puts("\t4- Sair");
        printf("\n\nEscolha a sua opcao: ");
        scanf("%d", &op);
    } while ((op<1) || (op>4));
    return(op);
}

void op1(tpilhas *x)
{
    int i;
    system("cls");
    puts("\nDados disponiveis: ");

    if (((*x).ni)==0)
        puts("Nenhum");
    else
    {
        for(i=0;i<((*x).ni);i++)
        { 
            printf("%s\n", (*x).elementos[i].nome);
        }
    }
    getch();
}

void op2(tpilhas *x)
{
    if(((*x).ni)==DIM)
    { 
        system("cls");
        puts("\nImpossivel ler novo dado por falta de espaço. Tente retirar um antes de inserir.");
        getch();
    }
    else
    {
        system("cls");
        puts("\nDiga o novo elemento (nome): ");
        fflush(stdin);
        gets((*x).elementos[(*x).ni].nome);
        ((*x).ni)++;
    }
}

void op3(tpilhas *x)
{
    if(((*x).ni)==0)
    { 
        system("cls");
        puts("\nImpossivel retirar dado por falta de dados. Tente inserir um antes de retirar.");
    }
    else
    { 
        system("cls");
        printf("\nDado retirado:");
        puts((*x).elementos[(*x).ni-1].nome);
        getch();
        strcpy((*x).elementos[(*x).ni-1].nome, "");
        ((*x).ni)--;
    }
}

void op4()
{
    system("cls");
    puts("\nObrigada por usar o nosso programa. \nAte breve!");
}

main() 
{
    int op;
    tpilhas pilha;

    inicializar(&pilha);
    
    do
    {
        op=menu();
        switch(op)
        { 
            case 1: op1(&pilha); break;
            case 2: op2(&pilha); break;
            case 3: op3(&pilha); break;
            case 4: op4(); break;
        }
    } while(op!=4);
}
