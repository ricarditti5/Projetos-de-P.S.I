#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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

struct sCelula{
    tipoPessoa item; // elemento inteiro ==> vamos fazer uma pilha de inteiros
    struct sCelula * proxima; // apontador para a próxima célula (onde estará o próximo elemento)
} ;
typedef struct sCelula tcelula;
//************************************************************************
//************************************************************************
// cria-se uma célula com conteúdo nulo (célula falsa) e põe-se a pilha a apontar para essa célula
tcelula * inicializar()
{
    tcelula *ap;
    ap=(tcelula*)malloc(sizeof(tcelula)); //tenta reservar espaço de memória para uma célula
    if(ap!=NULL) //se conseguir reservar coloca a célula a nulo e devolve a localização da 1a célula para a variável pilha
    { 
        inicializar1(&(*ap).item);
        (*ap).proxima=NULL;
        return(ap);
    }
    else //se NÃO conseguir reservar devolve NULL para a variável pilha
    {   system("cls");
        puts("Espaço de memória esgotado. Impossível inserir");
        getch();
        return(NULL);
    }

}
//************************************************************************
int menu ()
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
        scanf("%d",&op);
    }   while ((op<1) || (op>4) );
    return(op);
}
//************************************************************************
void listar(tcelula * x) //listar tudo
{
    system("cls");
    puts("Dados disponíveis: ");
    if ( (*x).proxima == NULL) // neste caso é porque só temos a célula falsa
    {
        puts("Nenhum");
    }
    else
    {
        while((*x).proxima != NULL)// enquanto não encontrarmos a última célula (falsa)
        { 
            imprimir1((*x).item);
            x=(*x).proxima; // o apontador avança para a próxima célula
        }
    }
    getch();
}

//************************************************************************
void lerNovoEl(tcelula * x) // ler e guardar um novo elemento
{
    tipoPessoa aux;
    tcelula * ap;
    ap=(tcelula *)malloc(sizeof(tcelula));
    if(ap==NULL) // se NÃO há espaço de memória
    { 
        system("cls");
        puts("Espaço de memória esgotado. Impossível inserir");
        getch();
    }
    else
    { //a célula nova passa a ser a célula falsa
        inicializar1(&(*ap).item);
        (*ap).proxima=NULL;
        // lê o elemento a inserir
        system("cls");
        puts("Diga o novo elemento: ");
        ler1(&aux);
        //liga a célula nova à pilha já existente e insere o novo elemento
    while((*x).proxima != NULL)// enquanto não chegamos à última célula (falsa)
    { 
        x=(*x).proxima; // o apontador X avança para a próxima célula
    }
        (*x).proxima = ap; //a anterior célula falsa deixa de o ser e passa a conter o novo elemento e a apontar para a nova    célula falsa

        (*x).item = aux; //guarda o novo elemento (q foi lido) na anterior célula falsa
    }
    // NOTA: pode-se criar e usar subrotina PUSH(pilha,x) para tornar a inserção mais genérica
}

//************************************************************************
void removerEl(tcelula * x) // retirar dados, se houver
{
    tcelula *y;
    if ( (*x).proxima == NULL) // neste caso é porque só temos a célula falsa
    { 
        system("cls");
        puts("Impossível retirar dado porque não tem elementos. Tente inserir um antes de retirar.");
        getch();
    }
    else
    {
        //procuramos a ultima célula válida (sem contar com a falsa)

        while((*x).proxima != NULL)// enquanto não encontrarmos a última célula (falsa)
    { 
        y=x; // y fica com o valor de x
        x=(*x).proxima; // X avança para a próxima célula
    }
        //imprimimos o valor
        system("cls");
        printf("Dado retirado: \n");
        imprimir1((*y).item);
        getch();
        //a penultima passa a ser a célula falsa
        (*y).proxima=NULL;
        //libertamos o espaço ocupado pela última célula
        free(x);
    }
    // NOTA: pode-se criar e usar subrotina x=POP(pilha)
}
//************************************************************************
void sair()
{
    system("cls");
    puts("Obrigada por usar o nosso programa. \nAte breve!");
    getch();
}

//************************************************************************
//************************************************************************
main(){
    int op;

    tcelula * pilha; // pilha é um apontador para a 1a célula (cada célula contém um elemento e um apontador para a próxima
    //célula)
    pilha=inicializar();
    do{
    op=menu();
    switch(op)
        { 
            case 1: listar(pilha); break;
            case 2: lerNovoEl(pilha); break;
            case 3: removerEl(pilha); break;
            case 4: sair(); break;
        }
    }while(op!=4);
}