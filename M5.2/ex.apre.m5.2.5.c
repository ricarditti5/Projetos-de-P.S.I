/*5. Defina uma estrutura que permita guardar o número e nome do empregado, bem como, todos os 12
salários que o empregado ganha ao longo do ano.
5.1. Declare uma variável do tipo de dados EMPREGADO.
5.2. Elabore um programa que permita ler todos os dados de um empregado e depois imprimir esses mesmos no ecrã.
5.3. Declare uma variável do tipo de dados EMPREGADO, que permita guardar 3 funcionários.
5.4. Que alterações devem ser efectuadas no último programa realizado de modo a guardar os dados de 3 funcionários
e imprimi-los no ecrã.*/

#include "stdio.h"
#include "conio.h"
#include "string.h"

#define DIM 2

typedef struct Empregado
{
    int num;
    char nomeEMP[25];
    float salario[12];
}TipoEmpregado;
//************************************************************
void LER_DADOS(TipoEmpregado empregado[DIM])
{
    int i,j;

    for(i=0;i<DIM;i++)
    {
        printf("\nDiga o Nome do %do Empregado:",i+1);
        fflush(stdin);
        gets(empregado[i].nomeEMP);
        printf("\nDiga o Numero do %do Empregado:",i+1);
        scanf("%d",&empregado[i].num);
        for(j=0;j<12;j++)
        {
            printf("\nDiga o %do Salario do %do Empregado:",j+1,i+1);
            scanf("%f",&empregado[i].salario[j]);
        }
    }
}
//************************************************************
void Mostrar(TipoEmpregado empregado[DIM])
{
    int i,j;
    for(i=0;i<DIM;i++)
    {
        printf("\nNome do %do Empregado:",i+1);
        puts(empregado[i].nomeEMP);
        printf("\nNumero do %do Empregado: %d",i+1,empregado[i].num);
        for(j=0;j<12;j++)
        {
            printf("\nSalario do %do Empregado: %f",j+1,empregado[i].salario[j]);
        }
    }
}
//************************************************************
main()
{
    TipoEmpregado empregado[DIM];

    LER_DADOS(empregado);
    Mostrar(empregado);
}