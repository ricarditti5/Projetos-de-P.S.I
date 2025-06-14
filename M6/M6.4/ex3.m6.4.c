#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


typedef struct
{
    char nome[50];
    int nif;
    int idade;
    float altura;
    
}tipoPessoa;

//***************************************************************************
void inicializar1(tipoPessoa *x)
{
    strcpy((*x).nome, "none");
    (*x).nif = 0;
    (*x).idade = 0;
    (*x).altura = 0.0;
}
//********************************************************************************
void imprimir1(tipoPessoa x)
{
    printf("\n\nNome:\t");
    puts(x.nome);
    printf("NIF:\t%d",x.nif);
    printf("\nIdade:\t%d",x.idade);
    printf("\nAltura:\t%.2f",x.altura);
}
//********************************************************************************
void ler1(tipoPessoa *x)
{
    printf("\nDiga o Nome:");
    fflush(stdin);
    gets((*x).nome);
    printf("\nDiga o NIF:"); scanf("%d",&(*x).nif);
    printf("\nDiga a Idade:"); scanf("%d",&(*x).idade);
    printf("\nDiga a Altura:"); scanf("%f",&(*x).altura);
    
}
//********************************************************************************

struct sCelula{

    tipoPessoa item; // elemento inteiro ==> vamos fazer uma fila de inteiros
    struct sCelula * prox; // apontador para a próxima célula (onde estará o próximo elemento)
} ;
typedef struct sCelula tcelula;
//************************************************************************//**************************************************************

tcelula * inicializar(){
 // cria-se uma célula com conteúdo nulo (célula falsa) e põe-se a fila a apontar para essa célula
    tcelula *ap;
    //tenta reservar espaço de memória para uma célula
    ap=(tcelula*)malloc(sizeof(tcelula));
    //se conseguir reservar coloca a célula a nulo e devolve a localização da 1a célula para a variável fila
    if(ap!=NULL)
    { 
        inicializar1(&(*ap).item);
        (*ap).prox=NULL;
        return(ap);
    }
    //se NÃO conseguir reservar devolve NULL para a variável fila
    else
    { 
        system("cls");
        puts("Espaço de memória esgotado. Impossível criar fila");
        getch();
        return(NULL);
    }
}

//************************************************************************
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
//************************************************************************
void listar(tcelula * x) //listar tudo
{
    int i;
    system("cls");
    puts("Dados disponíveis: ");
    if ( (*x).prox == NULL) // neste caso é porque só temos a célula falsa
    puts("Nenhum");
    else
    {
        while((*x).prox != NULL)// enquanto não encontrarmos a última célula (falsa)
        { 
            imprimir1((*x).item);
            x=(*x).prox; // o apontador avança para a próxima célula
        }
    }
    getch();
}
//************************************************************************
void lernovo(tcelula * x) // ler e guardar um novo elemento
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
    { 
        //a célula nova passa a ser a célula falsa
        inicializar1(&(*ap).item);
        (*ap).prox=NULL;
        // lê o elemento a inserir
        system("cls");
        puts("Diga o novo elemento: ");
        ler1(&aux);
        //liga a célula nova à fila já existente e insere o novo elemento
        while((*x).prox != NULL)// enquanto não chegamos à última célula (falsa)
        { 
            x=(*x).prox; // o apontador X avança para a próxima célula
        }
        (*x).prox = ap; //a anterior célula falsa deixa de o ser e passa a conter o novo elemento e a apontar para a nova célula falsa
        (*x).item = aux; //guarda o novo elemento (q foi lido) na anterior célula falsa
    }


    // NOTA: pode-se criar e usar subrotina ENQUEUE (fila,x) para tornar a inserção mais genérica
}
//************************************************************************
void apagarum(tcelula * * x) // retirar dados, se houver
{
    tcelula *y;
    y=*x;
    if ( (**x).prox == NULL) // neste caso é porque só temos a célula falsa
    { 
        system("cls");
        puts("Impossível retirar dado porque não tem elementos. Tente inserir um antes de retirar.");
        getch();
    }
    else
    { 
        //imprimimos o valor
        system("cls"); printf("Dado retirado:");imprimir1((*y).item); getch();
        (*x)=(*y).prox; // equivale a fazer (*x)= y->prox;
        //libertamos o espaço ocupado pela última célula
        free(y);
    }
    // NOTA: pode-se criar e usar subrotina x=DEQUEUE (fila)
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
main() {
    int op;
    tcelula * fila; // fila é um apontador para a 1a célula (cada célula contém um elemento e um apontador para a próxima célula)
    fila=inicializar();
    do{
        op=menu();
        switch(op)
        { 
            case 1: listar(fila); break;
            case 2: lernovo(fila); break;
            case 3: apagarum(&fila); break;
            case 4: sair(); break;
        }
    }while(op!=4);
}        