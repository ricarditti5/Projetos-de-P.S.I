/*2. Ler para um array as áreas de todas as casas de um condomínio (dez CASAS) e construir outro
array (VALOR) que conterá o valor a pagar por cada casa. Este valor é calculado da seguinte
forma: valor a pagar = 0.5 * área.*/

#include"stdio.h"
#include"conio.h"
#include"math.h"

#define condo 2

void imprimarray (int area[condo])
{
    int i;

    for (i=0;i<condo;i++)
    {
        printf("\t%d",area[i]);
    }
}
//**************************************************************************************************
void lerarray(int area[condo])
{
    int i;

    for (i=0;i<condo;i++)
    {
        printf("\nDiga a Area da %do Casa:",i+1); scanf("%d",&area[i]);
    }
}
//**************************************************************************************************
void valor_a_pagar(int area[condo],float valor[condo])
{
    int i;
    float res;

    for (i=0;i<condo;i++)
    {
        valor[i]=0.5 * area[i];

        res=valor[i];

        printf("\nA %d Casa deve pagar:%f EUROS",i+1,res);
    }
}
//**************************************************************************************************
main()
{
    int area[condo];
    float valor[condo],res;
    

    lerarray(area);

    imprimarray (area);

    valor_a_pagar(area,valor);

}
