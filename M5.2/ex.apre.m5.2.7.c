/*7. Defina uma estrutura TELEVISÃO que permita guardar o no e a designação do canal televisivo.
7.1. Declare uma variável x do tipo de dados TELEVISÂO.
7.2. Suponha que existe um tipo de dados PROGRAMA (para guardar o nome do programa e do apresentador, duração
e audiência). Defina esse tipo de dados.
7.3. Acrescente ao tipo de dados PROGRAMA um campo que permita identificar o canal onde é exibido programa
(deverá ser do tipo de dados TELEVISAO).*/

#include "stdio.h"
#include "conio.h"
#include "stdlib.h" 
#include "string.h"

#define DIM 2

typedef struct TELEVISAO
{
    int no;
    char designacaoC[45];
}TipoTelevisao;

typedef struct PROGRAMA
{
    char nomeP[45];
    char nomeApr[45];
    int duracao;
    float audiencia;
    TipoTelevisao canal;
}TipoPrograma;
//**************************************************************
void inicializar(TipoTelevisao tv[DIM], TipoPrograma pro[DIM]) 
{
    int i;

    for (i=0;i<DIM;i++) 
    {
        tv[i].no = 0;
        strcpy(tv[i].designacaoC, "*");

        strcpy(pro[i].nomeP, "*");
        strcpy(pro[i].nomeApr, "*");
        pro[i].duracao = 0;
        pro[i].audiencia = 0.0;
        pro[i].canal.no = 0;
        strcpy(pro[i].canal.designacaoC, "*");
    }
}
//**************************************************************
void MOSTRAR_INICIALIZACAO(TipoTelevisao tv[DIM], TipoPrograma pro[DIM])
{
    int i;

    printf("\nEstado Inicializado dos Canais Televisivos:\n");
    for (i=0;i<DIM;i++)
    {
        printf("\nCanal %d: \nNumero = %d,\nDesignacao = %s\n",i+1,tv[i].no,tv[i].designacaoC);
    }

    printf("\nEstado Inicializado dos Programas:\n");
    for (i=0;i<DIM;i++)
    {
        printf("\nPrograma %d: \nNome = %s, \nApresentador = %s, \nDuracao = %d, \nAudiencia = %.2f, \nCanal Numero = %d, \nCanal Designacao = %s\n",
               i+1,pro[i].nomeP, pro[i].nomeApr, pro[i].duracao, pro[i].audiencia, pro[i].canal.no, pro[i].canal.designacaoC);
    }
}
//***************************************************************
void LER_CANAL_TELEVISIVO(TipoTelevisao tv[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nDiga o Numero do Canal Televisivo:");
        scanf("%d",&tv[i].no);
        printf("\nDiga a Designacao do Canal Televisivo:");
        fflush(stdin);
        gets(tv[i].designacaoC);
    }
}
//**************************************************************
void LER_PROGRAMA(TipoPrograma pro[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nDiga o Nome do Programa:");
        fflush(stdin);
        gets(pro[i].nomeP);
        printf("\nDiga o Nome do Apresentador:");
        fflush(stdin);
        gets(pro[i].nomeApr);
        printf("\nDiga a Duração do Programa:");
        scanf("%d",&pro[i].duracao);
        printf("\nDiga a Audiencia do Programa:");
        scanf("%f",&pro[i].audiencia);
        printf("\nDiga o Numero do Canal Televisivo:");
        scanf("%d",&pro[i].canal.no);
    }
}
//**************************************************************
void MOSTRAR_PROGRAMA(TipoPrograma pro[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nNome do Programa:");
        puts(pro[i].nomeP);
        printf("\nNome do Apresentador:");
        puts(pro[i].nomeApr);
        printf("\nDuração do Programa:%d",pro[i].duracao);
        printf("\nAudiencia do Programa:%f",pro[i].audiencia);
        printf("\nNumero do Canal Televisivo:%d",pro[i].canal.no);
    }
}
//**************************************************************
void MOSTRAR_TELEVISAO(TipoTelevisao tv[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nNumero do Canal Televisivo:%d",&tv[i].no);
        printf("\nDesignacao do Canal Televisivo:");
        puts(tv[i].designacaoC);
    }
}
//**************************************************************
int  MENU(TipoTelevisao tv[DIM],TipoPrograma pro[DIM],int op)
{
    system("cls");
    printf("\n1. Ler Programa \n2.Ler Televisivo \n3. Mostrar Programa \n4. Mostrar Televisivo\n0. Sair\nOpcao: ");
    scanf("%d",&op);

    return(op);
}
//**********************************************************************
main()
{
    TipoTelevisao tv[DIM];
    TipoPrograma pro[DIM];
    int op;

    inicializar(tv,pro);
    MOSTRAR_INICIALIZACAO(tv,pro);
    do
    {
        op=MENU(tv, pro, op);

        switch(op)
        {
            case 1: LER_CANAL_TELEVISIVO(tv);   
            case 2: MOSTRAR_TELEVISAO(tv);
            case 3: LER_PROGRAMA(pro);          
            case 4: MOSTRAR_PROGRAMA(pro);
            case 0: printf("\nObrigado por Utilizar o Nosso Programa\n Ate breve");    break;
        }

        printf("\n\n");
        system("pause");

    } while (op!=0);
   
    system("pause");
    

    /*LER_CANAL_TELEVISIVO(tv);   MOSTRAR_TELEVISAO(tv);
    LER_PROGRAMA(pro);          MOSTRAR_PROGRAMA(pro);*/
}