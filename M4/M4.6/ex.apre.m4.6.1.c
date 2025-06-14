/*1. Declarar uma variável capaz de conter as temperaturas máximas mensais de Barcelos dos últimos
3 anos (array bidimensional 3x12). Criar e testar procedimentos para:
1.1. Ler todas as temperaturas
1.2. Imprimir as temperaturas
1.3. Imprimir a maior de todas as temperaturas
1.4. Dizer em que mês e ano ocorreu a maior de todas as temperaturas
1.5. Calcular a média por ano
1.6. Calcular a média por mês
1.7. Dizer se houve temperaturas superiores a 40 (segundo os dados disponíveis).*/

#include"stdio.h"
#include"conio.h"

#define ANOS 2
#define MESES 3

void iniciarray(float ar[ANOS][MESES])
{
    int i,j;

    for(i=0;i<ANOS;i++)
    {
        for(j=0;j<MESES;j++)
        {
            ar[i][j]=0;
        }
    }
}
//*******************************************************************************
void lerarray(float ar[ANOS][MESES])
{
    int i,j;

    for(i=0;i<ANOS;i++)
    {
        for(j=0;j<MESES;j++)
        {
            printf("\nDiga a Temperatura do %d Mes:",j+1);    scanf("%f",&ar[i][j]);
        }
        printf("\n");
    }
}
//*******************************************************************************
void imprimarray(float ar[ANOS][MESES])
{
    int i,j;

    for(i=0;i<ANOS;i++)
    {
        for(j=0;j<MESES;j++)
        {
            printf("\t%.1f",ar[i][j]);
        }
        printf("\n");
    }
}
//*******************************************************************************
void vermaior(float ar[ANOS][MESES])
{
	int i,j;
    float maior;

    maior=ar[0][0];
    for(i=0;i<ANOS;i++)
    {
        for(j=0;j<MESES;j++)
        {
            if(ar[i][j]>maior)
            {
                maior=ar[i][j];
            }
        }
    }
	printf("\nO Maior e:\t%.1f",maior);
}
//***********************************************************************************************
void MAIOR_TEMPE_MES_ANO(float ar[ANOS][MESES])
{
    int i,j,posi=0,posj=0,maior=ar[0][0];


    for(i=0;i<ANOS;i++)
    {
        for(j=0;j<MESES;j++)
        {
            if(ar[i][j]>maior)
            {
                maior=ar[i][j];
                posi=i;
                posj=j;
            }
        }
    }
    printf("\nA Maior Temperatura Ocorreu no %d ANO e no %d MES",posi,posj);
}
//*******************************************************************************
void MEDIA_ANUAL(float ar[ANOS][MESES]) 
{
    int i,j;
    float soma=0;

    for(int i=0;i<ANOS;i++) 
    {
        soma=0;
        for(int j=0;j<MESES;j++)
        {
            soma=soma+ar[i][j];
        }
        printf("\nMedia do %do ano e: %.1f",i+1,soma / MESES);
    }
}
//*******************************************************************************
void MEDIA_MENSAL(float ar[ANOS][MESES]) 
{
    int i,j;
    float soma=0;

    for(int j=0;j<MESES;j++) 
    {
        soma=0;

        for(int i=0;i<ANOS;i++) 
        {
            soma=soma+ar[i][j];
        }
        printf("\nMedia do %do Mes e: \t%.1f",j+1,soma / ANOS);
    }
}
//*******************************************************************************
void VER_SUPERIOR_40(float ar[ANOS][MESES])
{
    int i,j,find;
    float media=0;

    printf("\n");
    for(i=0;i<ANOS;i++)
    {
        for(j=0;j<MESES;j++)
        {
           if (ar[i][j]>40)
           {
            find=1;
           }
                else
                {
                    find=0;
                }
        }
    }
    if(find==1)
    {
        printf("\nSIM, houve Temperaturas Superiores a 40o.C");
    }
          else
                {
                    printf("\nNAO,nao houve Temperaturas Superiores a 40o.C");
                }

    printf("\n");
}
//*******************************************************************************
main()
{
    float ar[ANOS][MESES];

    iniciarray(ar);    imprimarray(ar);

    lerarray(ar);      imprimarray(ar);

    vermaior(ar);

    MAIOR_TEMPE_MES_ANO(ar);

    MEDIA_ANUAL(ar);

    MEDIA_MENSAL(ar);

    VER_SUPERIOR_40(ar);
}