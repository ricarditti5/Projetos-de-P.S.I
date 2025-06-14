#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    char nome[50];
    int nif;
}tipoPessoa;

//***************************************************************************
void inicializar1(tipoPessoa *x)
{
    strcpy((*x).nome, "none");
    (*x).nif = 0;
}
//********************************************************************************
void imprimir1(tipoPessoa x)
{
    printf("\n\nNome:\t");
    puts(x.nome);
    printf("NIF:\t%d",x.nif);
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

struct s{
    tipoPessoa item;
    struct s * prox;
};
typedef struct s tcelula;

tcelula * inicializar()
{
    tcelula * ap;
    ap= (tcelula *) malloc( sizeof(tcelula));
    if(ap==NULL)
    {
        system("cls");
        printf("E impossivel criar a lista");
        getch();
        return(NULL);
    }
    else
    {
        inicializar1(&(*ap).item);
        (*ap).prox=NULL;
        return(ap);
    }
}
int menu()
{
    int op;
    system("cls");
    do{        
    printf("Escolha a opcao:\n");
    printf("\t 1- Listar tudo\n");
    printf("\t 2- Inserir\n");
    printf("\t 3- Retirar\n");
    printf("\t 4- Sair\n");
    scanf("%i", &op);
    }while ((op<1) || (op>5) );
    return(op);
}

void listar(tcelula * x)
{
    int i;
    system("cls");
    puts("Dados disponiveis: ");
    if((*x).prox==NULL)
    {
        puts ("Nenhum");
    }
    else{
        while((*x).prox != NULL)
        {
            imprimir1((*x).item);
            x=(*x).prox;
        }
    }
    getch();
}
void inserir(tcelula *x)
{
    tcelula * ap;
    tipoPessoa aux;

    ap=(tcelula *)malloc(sizeof(tcelula));
    system("cls");
    if(ap==NULL)
    { 
        printf("Nao existe mais espaço em memoria. E impossivel inserir");
        getch();
    }
    else
    {
        inicializar1(&(*ap).item);

        (*ap).prox=NULL;
        while((*x).prox!=NULL)
        { 
            x=(*x).prox;
        }
        printf("Qual o elemento a inserir? ");
        ler1(&aux);
        (*x).item=aux;
        (*x).prox=ap;
    }
}

void retirar(tcelula **x)
{
    tcelula *y, *atras, *frente, *aux;
    int eleretirar;
    system ("cls");
    y=(*x);
    if(((*y).prox)==NULL)//Se o Elemento apontado por y no campo próximo for nullo vai mostrar no ecrã que não tem dados
    { 
    printf("A lista nao tem dados"); }
    else
    {
        printf("Qual o NIF do elemento quer retirar?");
        fflush(stdin);scanf("%i", &eleretirar);
    if(eleretirar==(*(*x)).item.nif) //Se a variável eleretirar for igual ao apontador que aponta para elemento apontado por x no campo item vai mostrar esse elemento
    {
        system ("cls");
        printf("Retirado o elemento:\n");            
        imprimir1((*(*x)).item);
        (*x)=(*(*x)).prox; //o elemento apontado por x toma o valor do apontador que aponta para elemento apontado por x no campo proximo
        free(y); //a seguir desse processo ele liberta o espaço reservado
    }
        else
            {
                aux=(*x); //senão a variável aux toma o valor do elemento apontado por x
                while ((eleretirar!=(*aux).item.nif) && ((*(*aux).prox).prox!=NULL))
                {//e vai repetir enquanto, a variável eleretirar não for igual ao elemnto apontado aux no campo item e quando o apontador aponta para o elemento apontado por aux no campo proximo que aponta no campo próximo não for igual a null
                    atras=aux;
                    aux=(*aux).prox;
                    frente=(*aux).prox;
                }
                //a variavel atras toma o valor de aux, aux toma o valor do elemento apontado por aux no campo porximo e a variavel frente toma o valor do elemento apontado por aux no campo proximo
                if (eleretirar==(*aux).item.nif)
                { //Se a variavel eleretirar for igual ao elemento apontado por aux no campo item
                    (*atras).prox=frente;
                    printf("Retirado o elemento\n");
                    imprimir1((*aux).item);
                    free(aux); //o elemento apontado por atras no campo proximo toma o valor da variável frente, mostra o elemento apontado por aux no campo item e depois liberta o espaço reservado na memória
                }
                else // se não encontrou o numero que é pedido (a retirar)
                {
                    //vai mostrar na tela que o elemento não foi encontrado
                    system ("cls"); printf("O elemento com o nif %d não existe na lista", eleretirar);
                }
                }
            }
            getch();
}

void sair()
{
    system("cls");
    printf("***********************************ATEBREVE************************************");
    getch();
}

main()
{
    int op;
    tcelula * lista;
    lista=inicializar();
    do{
        op=menu();
        switch(op)
            {
                case 1: listar(lista);break;
                case 2: inserir(lista);break;
                case 3: retirar(&lista);break;
                case 4: sair();break;
            }
    }while(op!=4);
}