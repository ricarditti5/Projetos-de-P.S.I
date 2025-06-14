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
    struct sCelula * prox; // apontador para a prÃ³xima cÃ©lula (onde estarÃ¡ o prÃ³ximo elemento)
} ;
typedef struct sCelula tcelula;
//************************************************************************//**************************************************************

tcelula * inicializar(){
 // cria-se uma cÃ©lula com conteÃºdo nulo (cÃ©lula falsa) e pÃµe-se a fila a apontar para essa cÃ©lula
    tcelula *ap;
    //tenta reservar espaÃ§o de memÃ³ria para uma cÃ©lula
    ap=(tcelula*)malloc(sizeof(tcelula));
    //se conseguir reservar coloca a cÃ©lula a nulo e devolve a localizaÃ§Ã£o da 1a cÃ©lula para a variÃ¡vel fila
    if(ap!=NULL)
    { 
        inicializar1(&(*ap).item);
        (*ap).prox=NULL;
        return(ap);
    }
    //se NÃƒO conseguir reservar devolve NULL para a variÃ¡vel fila
    else
    { 
        system("cls");
        puts("Espaco de memoria esgotado. Impossavel criar fila");
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
    puts("\t4-Calcular a Media das Idades");
    puts("\t5-Maior das Idades");
    puts("\t6-Menor das Idades");
    puts("\t7-Amplitude das Idades");
    puts("\t5- Sair");
    printf("\n\nEscolha a sua opcao: ");
    scanf("%d",&op);
    }while ((op<0) || (op>7) );
    return(op);
}
//************************************************************************
void listar(tcelula * x) //listar tudo
{
    system("cls");
    puts("Dados disponiveis: ");
    if ( (*x).prox == NULL) // neste caso Ã© porque sÃ³ temos a cÃ©lula falsa
    puts("Nenhum");
    else
    {
        while((*x).prox != NULL)// enquanto nÃ£o encontrarmos a Ãºltima cÃ©lula (falsa)
        { 
            imprimir1((*x).item);
            x=(*x).prox; // o apontador avanÃ§a para a prÃ³xima cÃ©lula
        }
    }
    getch();
}
//************************************************************************
void media_Idades(tcelula * x) // calcula e mostra a mÃ©dia das idades
{
    int soma = 0, cont= 0;

    system("cls");
     if ( (*x).prox == NULL) // neste caso Ã© porque sÃ³ temos a cÃ©lula falsa
        puts("Nao e possivel calcular a media porque nao tem dados.");
    else
    {
        while((*x).prox != NULL)// enquanto nÃ£o encontrarmos a Ãºltima cÃ©lula (falsa)
        { 
            soma = soma + (*x).item.idade;
            cont++;
            x=(*x).prox; // o apontador avanÃ§a para a prÃ³xima cÃ©lula
        }
        printf("A Media e: %.2f",(float) soma/cont);
    }
    getch();
}
//************************************************************************
void ver_maior(tcelula * x) // calcula e mostra a mÃ©dia das idades
{
    int maior = 0;
    system("cls");
    if ( (*x).prox == NULL) // neste caso Ã© porque sÃ³ temos a cÃ©lula falsa
        puts("Nao ha dados para ver a maior idade");
    else
    {
        while((*x).prox != NULL)// enquanto nÃ£o encontrarmos a Ãºltima cÃ©lula (falsa)
        { 
            if((*x).item.idade>maior)
                {
                    maior= (*x).item.idade;
                }
            x=(*x).prox; // o apontador avanÃ§a para a prÃ³xima cÃ©lula
        }
        printf("O Maior e:%d",maior);
        printf("\n\n");
    }
    getch();
}
//************************************************************************
void ver_menor(tcelula * x) // calcula e mostra a mÃ©dia das idades
{
    int menor = 1000;
    system("cls");
    if ( (*x).prox == NULL) // neste caso Ã© porque sÃ³ temos a cÃ©lula falsa
        puts("Nao ha dados para ver a maior idade");
    else
    {
        while((*x).prox != NULL)// enquanto nÃ£o encontrarmos a Ãºltima cÃ©lula (falsa)
        { 
            if((*x).item.idade<menor)
                {
                    menor= (*x).item.idade;
                }
            x=(*x).prox; // o apontador avanÃ§a para a prÃ³xima cÃ©lula
        }
        printf("O Maior e:%d",menor);
        printf("\n\n");
    }
    getch();
}
void amplitude_idade(tcelula * x) // calcula e mostra a mÃ©dia das idades
{
   

    int res=0, maior=0, menor=1000;

    system("cls");
    if ( (*x).prox == NULL) // neste caso Ã© porque sÃ³ temos a cÃ©lula falsa
        puts("Nao ha dados para ver a amplitude");
    else
    {
        while((*x).prox != NULL)// enquanto nÃ£o encontrarmos a Ãºltima cÃ©lula (falsa)
        { 
            if((*x).item.idade>maior)
                {
                    maior= (*x).item.idade;
                }

            if((*x).item.idade<menor)
                {
                    menor= (*x).item.idade;
                }
            x=(*x).prox; // o apontador avanÃ§a para a prÃ³xima cÃ©lula
        }
        res= maior - menor;

        printf("A amplitude e:%d",res);
        printf("\n\n");
    }
    getch();
}

void lernovo(tcelula * x) // ler e guardar um novo elemento
{
    tipoPessoa aux;
    tcelula * ap;
    ap=(tcelula *)malloc(sizeof(tcelula));
    if(ap==NULL) // se NÃƒO hÃ¡ espaÃ§o de memÃ³ria
    { 
        system("cls");
        puts("Espaco de memoria esgotado. Impossavel inserir");
        getch();
    }
    else
    { 
        //a cÃ©lula nova passa a ser a cÃ©lula falsa
        inicializar1(&(*ap).item);
        (*ap).prox=NULL;
        // lÃª o elemento a inserir
        system("cls");
        puts("Diga o novo elemento: ");
        ler1(&aux);
        //liga a cÃ©lula nova Ã  fila jÃ¡ existente e insere o novo elemento
        while((*x).prox != NULL)// enquanto nÃ£o chegamos Ã  Ãºltima cÃ©lula (falsa)
        { 
            x=(*x).prox; // o apontador X avanÃ§a para a prÃ³xima cÃ©lula
        }
        (*x).prox = ap; //a anterior cÃ©lula falsa deixa de o ser e passa a conter o novo elemento e a apontar para a nova cÃ©lula falsa
        (*x).item = aux; //guarda o novo elemento (q foi lido) na anterior cÃ©lula falsa
    }

    // NOTA: pode-se criar e usar subrotina ENQUEUE (fila,x) para tornar a inserÃ§Ã£o mais genÃ©rica
}
//************************************************************************
void apagarum(tcelula * * x) // retirar dados, se houver
{
    tcelula *y;
    y=*x;
    if ( (**x).prox == NULL) // neste caso Ã© porque sÃ³ temos a cÃ©lula falsa
    { 
        system("cls");
        puts("Impossivel retirar dado porque nao tem elementos. Tente inserir um antes de retirar.");
        getch();
    }
    else
    { 
        //imprimimos o valor
        system("cls"); printf("Dado retirado:");imprimir1((*y).item); getch();
        (*x)=(*y).prox; // equivale a fazer (*x)= y->prox;
        //libertamos o espaÃ§o ocupado pela Ãºltima cÃ©lula
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
    tcelula * fila; // fila Ã© um apontador para a 1a cÃ©lula (cada cÃ©lula contÃ©m um elemento e um apontador para a prÃ³xima cÃ©lula)
    fila=inicializar();
    do{
        op=menu();
        switch(op)
        { 
            case 1: listar(fila); break;
            case 2: lernovo(fila); break;
            case 3: apagarum(&fila); break;
            case 4: media_Idades(fila); break;
            case 5: ver_maior(fila); break;
            case 6: ver_menor(fila); break;
            case 7: amplitude_idade(fila); break;
            case 0: sair(); break;
        }
    }while(op!=0);
}