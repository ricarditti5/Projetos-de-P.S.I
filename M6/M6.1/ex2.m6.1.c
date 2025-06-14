/*2. Teste o código do programa seguinte (pilha estática) e depois altere-o, usando os procedimentos
criados na pergunta anterior, de modo a que os elementos da pilha sejam dados de pessoas
(tipoPessoa).*/
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"

#define DIM 5
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

typedef struct {
int ni; // número de elementos já inseridos
tipoPessoa elementos[DIM];
} tpilhas;


//***************************************************************************
//***************************************************************************

void inicializar(tpilhas * x)
{
int i;

(*x).ni=0;
for(i=0;i<DIM;i++)
{ inicializar1(&(*x).elementos[i]);
}

}
//***************************************************************************

int menu ()
{
int op;
do{
system("cls");
puts("OPCOES:");
puts("\t1- listar todos os dados");
puts("\t2- ler novos dados");
puts("\t3- Retirar dados");
puts("\t4- Sair");
printf("\n\nEscolha a sua opcao: ");
scanf("%d",&op);
}while ((op<1) || (op>4) );
return(op);
}

//***************************************************************************

void op1(tpilhas * x) //listar tudo
{
int i;

system("cls");
puts("Dados disponíveis: ");
if (((*x).ni)==0)

puts("Nenhum");
else
{
for(i=0;i<((*x).ni);i++)
{ imprimir1(x->elementos[i]);
}
}
getch();
}

//***************************************************************************

void op2(tpilhas * x) // ler novo, se houver espaço - pode-se criar e usar subrotina PUSH(pilha,x)
{
int i,j, flag=0;

if(((*x).ni) == DIM)
{ system("cls");
puts("Impossível ler novo dado por falta de espaço. Tente retirar um antes de inserir.");
getch();
}
else
{system("cls");
puts("Diga o novo elemento: ");
ler1(&((*x).elementos[(*x).ni]));
((*x).ni)++;
}
}
//***************************************************************************
void op3(tpilhas * x) // retirar dados, se houver - pode-se criar e usar subrotina x=POP(pilha)
{

if(((*x).ni)==0)
{ system("cls");
puts("Impossível retirar dado por falta de dados. Tente inserir um antes de retirar.");
getch();
}

else
{ system("cls");
printf("Dado retirado: \n");
imprimir1((*x).elementos[(*x).ni-1]);
getch();
((*x).ni)--;
}

}
//***************************************************************************
//***************************************************************************
void op4()
{
system("cls");
puts("Obrigada por usar o nosso programa. \nAte breve!");
getch();
}
//***************************************************************************
//***************************************************************************

main() {
int op;

tpilhas pilha;
inicializar(&pilha);
// printf("ne:%d \t 1o:%d",pilha.ni,pilha.elementos[0] ); getch();
do{
op=menu();
switch(op)
{ case 1: op1(&pilha); break;
case 2: op2(&pilha); break;
case 3: op3(&pilha); break;
case 4: op4(); break;
}
}while(op!=4);
}