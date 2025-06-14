/********************************************************/
#include"stdio.h"
#include"conio.h"

#define SALAS 4
#define ALUNOS 3


void iniciarray(int ar[SALAS][ALUNOS])
{
    int i,j;

    for(i=0;i<SALAS;i++)
    {
        for(j=0;j<ALUNOS;j++)
        {
            ar[i][j]=0;
        }
       
    }
}
//*******************************************************************************
void lerarray(int ar[SALAS][ALUNOS])
{
    int i,j;

    for(i=0;i<SALAS;i++)
    {
        for(j=0;j<ALUNOS;j++)
        {
            printf("\nDiga, para a Sala %d, o valor do %d Aluno:", i+1,j+1);    scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
}
//*******************************************************************************
void imprimarray(int ar[SALAS][ALUNOS])
{
    int i,j;

    for(i=0;i<SALAS;i++)
    {
        for(j=0;j<ALUNOS;j++)
        {
            printf("\t\t%d",ar[i][j]);
        }
        printf("\n");
    }
}
//*******************************************************************************
main()
{
    int ar[SALAS][ALUNOS];

    iniciarray(ar);
    imprimarray(ar);

   lerarray(ar);    
    imprimarray(ar);
 

    //printf("\nA Sala dos Alunos e:\t");  imprimarray(ar);
}


