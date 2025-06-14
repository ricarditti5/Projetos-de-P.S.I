/*2. Defina uma estrutura, TIPODISCIPLINA, que permita guardar o nome da disciplina, número de horas
semanais e ano do curso onde é leccionada.
2.1. Declare uma variável do tipo de dados TIPODISCIPLINA.
2.2. Imagine um tipo de dados TIPOCURSO (para guardar o nome e código do curso onde as disciplinas são
leccionadas). Defina esse tipo de dados.
2.4. Elabore um programa que permita ler todos os dados de uma disciplina e depois imprimir esses mesmos no ecrã.*/




       
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

#define CURSO 1
#define DSCPLN 2

typedef struct curso
{
    char nomeC[30];
    int codCurso;

}TipoCurso;
//***************************************************
typedef struct disciplina
{
    char nomeD[30];
    int horarsemanas;
    int anoCurso;
}TipoDisciplina;
//***************************************************
void LER_DISCIPLINA(TipoDisciplina dcpl1[CURSO][DSCPLN])
{
    int i, j;
    for(i=0; i<CURSO; i++)
        for(j=0; j<DSCPLN; j++)
        {
            printf("\nDisciplina %d do %d Ano:\n", j+1, i+1);
            printf("\nDiga o Nome da Disciplina: ");
            gets(dcpl1[i][j].nomeD);
            printf("Diga o Numero de Horas Semanais: ");
            scanf("%d", &dcpl1[i][j].horarsemanas);
            printf("Diga o Ano do Curso: ");
            scanf("%d", &dcpl1[i][j].anoCurso);
            fflush(stdin);
        }
}
//***************************************************
void LER_CURSO(TipoCurso crs1)
{
    printf("\nDiga o Nome do Curso: ");
    gets(crs1.nomeC);
    printf("Diga o Codigo do Curso: ");
    scanf("%d", &crs1.codCurso);
    fflush(stdin);
}
//***************************************************
void MOSTRAR_DISCIPLINA(TipoDisciplina dcpl1[CURSO][DSCPLN])
{
    int i, j;
    for(i=0; i<CURSO; i++)
        for(j=0; j<DSCPLN; j++)
        {
            printf("\nDisciplina %d do %d Ano:", j+1, i+1);
            printf("\nNome da Disciplina:");
            puts(dcpl1[i][j].nomeD);
            printf("\nNumero de Horas Semanais: %d", dcpl1[i][j].horarsemanas);
            printf("\nAno do Curso: %d\n", dcpl1[i][j].anoCurso);
        }
}
//***************************************************
void MOSTRAR_CURSO(TipoCurso crs1)
{
    printf("\nNome do Curso:\t");puts(crs1.nomeC);
    printf("\nO Codigo do Curso e:%d",crs1.codCurso);

}
main()
{
    TipoDisciplina dcpl1[CURSO][DSCPLN];
    TipoCurso crs1;

    
    /*LER Novos dados*/
    LER_DISCIPLINA(dcpl1);
    LER_CURSO(crs1);
    system("cls");
        /*Mostrar Dados*/
    printf("\nDISCIPLINAS:\n");
    MOSTRAR_DISCIPLINA(dcpl1);
    printf("\nCURSOS:\n");
    MOSTRAR_CURSO(crs1);
}