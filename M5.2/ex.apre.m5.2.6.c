/*6. Defina as estruturas que permitam guardar:
6.1. O tipo de dados TURMA com o ano e designação da turma. Declare uma variável x desse tipo.
6.2. O tipo de dados ALUNO (para guardar o no do processo, nome, idade e peso do aluno) e o tipo de dados CURSO
(para guardar o nome do curso e sua duração).
6.3. No tipo de dados TURMA acrescente um campo que permita identificar o delegado dessa turma (deverá ser do
tipo de dados ALUNO) e o respetivo curso (deverá ser do tipo de dados CURSO).
6.4. O tipo de dados DISCIPLINA (código da disciplina, nome da disciplina, notas dos 3 melhores testes efetuados).
6.5. Declare uma variável do tipo de dados DISCIPLINA que permita guardar os dados de 4 disciplinas.*/

#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

#define NA 2
#define NC 2
#define NTR 2

typedef struct Aluno
{
    int nProcesso;
    char nomeA[45];
    int idade;
    float peso;
}TipoAluno;
typedef struct Curso
{
    char nomeC[50];
    int duracao;
}TipoCurso;
typedef struct Disciplina
{
    int cod;
    char nomeD[25];
    float notas[3];
}TipoDisciplina;

typedef struct Turma
{
    int ano;
    char designa[15];
    TipoAluno delegado[45];
    TipoCurso curso[50];
}TipoTurma;
//************************************************************************************************
void inicializar(TipoDisciplina dscpl[4], TipoCurso crs[NC], TipoAluno aln[NA], TipoTurma xx[NTR]) 
{
    int i,j;

    for (i=0;i<4;i++) 
    {
        dscpl[i].cod=0;
        strcpy(dscpl[i].nomeD,"*");
        for (int j=0;j<3;j++)
        {
            dscpl[i].notas[j]=0.0;
        }
    }

    for (i=0;i<NC;i++) 
    {
        strcpy(crs[i].nomeC,"*");
        crs[i].duracao=0;
    }

    for (i=0;i<NA;i++) 
    {
        aln[i].nProcesso=0;
        strcpy(aln[i].nomeA,"*");
        aln[i].idade=0;
        aln[i].peso=0.0;
    }

    for (i=0;i<NTR;i++) 
    {
        xx[i].ano=0;
        strcpy(xx[i].designa,"*");
        for (j=0;j<45;j++) 
        {
            xx[i].delegado[j].nProcesso=0;
            strcpy(xx[i].delegado[j].nomeA,"*");
            xx[i].delegado[j].idade=0;
            xx[i].delegado[j].peso=0.0;
        }
        for (j = 0; j < 50; j++) 
        {
            strcpy(xx[i].curso[j].nomeC, "*");
            xx[i].curso[j].duracao = 0;
        }
    }
}
void mostrar(TipoDisciplina dscpl[4], TipoCurso crs[NC], TipoAluno aln[NA], TipoTurma xx[NTR]) 
{
    int i;

    printf("Disciplinas:\n");
    for (i = 0; i < 4; i++) 
    {
        printf("Codigo: %d, Nome: %s, Notas: %.2f, %.2f, %.2f\n", dscpl[i].cod, dscpl[i].nomeD, dscpl[i].notas[0], dscpl[i].notas[1], dscpl[i].notas[2]);
    }

    printf("\nCursos:\n");
    for (i = 0; i < NC; i++) 
    {
        printf("Nome: %s, Duracao: %d anos\n", crs[i].nomeC, crs[i].duracao);
    }

    printf("\nAlunos:\n");
    for (i = 0; i < NA; i++) 
    {
        printf("N. Processo: %d, Nome: %s, Idade: %d, Peso: %.2f\n", aln[i].nProcesso, aln[i].nomeA, aln[i].idade, aln[i].peso);
    }

    printf("\nTurmas:\n");
    for (i = 0; i < NTR; i++) 
    {
        printf("Ano: %d, Designacao: %s, Delegado: %s, Curso: %s\n", xx[i].ano, xx[i].designa, xx[i].delegado[0].nomeA, xx[i].curso[0].nomeC);
    }
}
//************************************************************************************************
void LER_DADOS(TipoDisciplina dscpl[4],TipoCurso crs[NC],TipoAluno aln[NA],TipoTurma xx[NTR])
{
    int i;

    printf("\nDISCIPLINAS\n");
    for(i=0;i<4;i++)
    {
       printf("\nDiga o Codigo da %do Disciplina:",i+1); scanf("%d",&dscpl[i].cod);
       printf("\nDiga o Nome da %do Disciplina:",i+1);
       fflush(stdin);
       gets(dscpl[i].nomeD);
    }
    printf("\nCURSOS:\n");
    for(i=0;i<NC;i++)
    {
        printf("\nDiga o nome do %do Curso:",i+1);
        fflush(stdin);
        gets(crs[i].nomeC);
        printf("\nDiga a Duração do  %do Curso:",i+1);
        scanf("%d",&crs[i].duracao);
    }
    printf("\nALUNOS:\n");
    for(i=0;i<NA;i++)
    {
        printf("\nDiga o Numero de Processo do %do Aluno:\t",i+1);
        scanf("%d",&aln[i].nProcesso);
        
        fflush(stdin);        
        printf("\nDiga o Nome do %do Aluno:",i+1);
        fflush(stdin);
        gets(aln[i].nomeA);

        printf("\nDiga a Idade do %do Aluno:",i+1);
        scanf("%f",&aln[i].peso);
    }
    printf("\nTURMAS:\n");
    for(i=0;i<NTR;i++)
    {
        printf("\nDiga o Ano da %do Turma:",i+1);
        scanf("%d",&xx[i].ano);
        printf("\nDiga a Designação desta Turma:");
        fflush(stdin);
        gets(xx[i].designa);
        printf("\nDiga o Nome do Delegado Da Turma %d:",i+1);
        fflush(stdin);
        gets(xx[i].delegado[0].nomeA);
        printf("\nDiga o Curso da Turma %d:",i+1);
        fflush(stdin);
        gets(xx[i].curso[0].nomeC);
    }
}
//************************************************************************************************
void LER_NOTAS(TipoDisciplina dscpl[4])
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nDiga a Nota do %do Teste:",i+1);
        scanf("%f",&dscpl[i].notas[i]);
    }
}
//************************************************************************************************
 void MOSTRAR_NOTAS(TipoDisciplina dscpl[4])
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nNota do %do Teste: %.2f",i+1,dscpl[i].notas[i]);
    }
}
//************************************************************************************************
void MOSTRAR_DADOS(TipoDisciplina dscpl[4],TipoCurso crs[NC],TipoAluno aln[NA],TipoTurma xx[NTR])
{
    int i;

    printf("\nDISCIPLINAS\n");
    for(i=0;i<4;i++)
    {
        printf("\nCodigo da %do Disciplina: %d",i+1,dscpl[i].cod);
        printf("\nNome da %do Disciplina:",i+1);
        puts(dscpl[i].nomeD);
    }
    printf("\nCURSOS:\n");
    for(i=0;i<NC;i++)
    {
        printf("\nNome do %do Curso:",i+1);
        puts(crs[i].nomeC);
        printf("\nDuração do  %do Curso: %d anos",i+1,crs[i].duracao);
    }
    printf("\nALUNOS:\n");
    for(i=0;i<NA;i++)
    {
        printf("\nNumero de Processo do %do Aluno:%d",i+1,aln[i].nProcesso);
        printf("\nNome do %do Aluno:",i+1);
        puts(aln[i].nomeA);
        printf("\nIdade do %do Aluno: %d",i+1,aln[i].idade);
        printf("\nPeso do %do Aluno: %.2f",i+1,aln[i].peso);
    }
    printf("\nTURMAS:\n");
    for(i=0;i<NTR;i++)
    {
        printf("\nAno da %do Turma: %d",i+1,xx[i].ano);
        printf("\nDesignação desta Turma:");
        puts(xx[i].designa);
        printf("\nNome do Delegado Da Turma %d:",i+1);
        puts(xx[i].delegado[0].nomeA);
        printf("\nCurso da Turma %d:",i+1);
        puts(xx[i].curso[0].nomeC);
    }
}
//******************************************************************************
int MENU()
{
    int op;

	system("cls");
    printf("\nMenu:\n");
    printf("\n1-Ler novos Dados da Turma\n");
    printf("\n2-Mostrar Dados da Turma\n");
    printf("\n3-Ler Notas do Teste:\n");
    printf("\n4-Mostrar Notas do Teste\n");
    printf("\n0-SAIR\n");
    printf("\nDiga a sua Opcao:");    scanf("%d",&op);
    while( (op<0) || (op>4) )
    {
        printf("Essa opcao esta errada \nDiga a sua opcao [0...3]:");    scanf("%d",&op);
    }
    return(op);

}
//******************************************************************************
main() 
{
    TipoDisciplina dscpl[4];
    TipoCurso crs[NC];
    TipoAluno aln[NA];
    TipoTurma xx[NTR];
    int op;

    inicializar(dscpl, crs, aln, xx);
    mostrar(dscpl, crs, aln, xx);

    do
    {
        op=MENU();

        switch(op)
        {
            case 1:     LER_DADOS(dscpl,crs,aln,xx);    break;
            case 2:     MOSTRAR_DADOS(dscpl,crs,aln,xx);    break;
            case 3:     LER_NOTAS(dscpl);    break;
            case 4:     MOSTRAR_NOTAS(dscpl);    break;
            case 0:     printf("\nObrigado por Utilizar o Nosso Programa\n Ate breve");    break;
        }

        printf("\n\n");
        system("pause");

    } while (op!=0);
   
    system("pause");
    
}