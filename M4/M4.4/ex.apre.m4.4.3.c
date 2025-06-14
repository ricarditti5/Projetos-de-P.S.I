/*3. Ler, para um array GASTOS, os gastos mensais de uma família (relativos a ano civil anterior).
Fazer um menu de opções para:
3.1. Ler dados
3.2. Calcular média (mensal)
3.3. Contar quantos meses tiveram gastos superiores à média
3.4. Calcular qual o maior gasto
3.5. Calcular qual o mês em que houve o maior gasto
3.6. Perguntar qual o mês cujo valor pretende ver e apresentá-lo*/

#include"stdio.h"
#include"conio.h"

#define MESES 5

void lerarray(int gastos[MESES])
{
    int i;

    for(i=0;i<MESES;i++)
    {
        printf("\nDiga os gastos mensais do %do mes:",i+1);  scanf("%d",&gastos[i]);
    }
}
//********************************************************************************************************
void imprimarray(int gastos[MESES])
{
    int i;

    for(i=0;i<MESES;i++)
    {
        printf("\t%d",gastos[i]);
    }
}
//********************************************************************************************************
float CALC_MEDIA_MENSAL(int gastos[MESES])
{
    int soma=0,i;
    float res;

    for(i=0;i<MESES;i++)
    {
        soma=soma+gastos[i];
    }
    res=soma/MESES;
    printf("\nA Media Mensal e:\t%.2f",res);
    return(res);
}
//********************************************************************************************************
void MES_SUPERIOR(int gastos[MESES])
{
    int i,maior;

    maior=gastos[0];

    for(i=0;i<MESES;i++)
    {
       if(gastos>maior)
       {
            maior=gastos[i];
       }
    }
    printf("\nO Mes com o Valor Superior em Relacao aos Outros e:\t%d",maior);
}
//********************************************************************************************************
void CALC_MAIORES(int gastos[MESES]) 
{
    int i, cont = 0;
    float media = CALC_MEDIA_MENSAL(gastos); 

    for (i = 0; i<MESES; i++) z
    {
        if (gastos[i] >= media) 
        {  
            cont++;
        }
    }
    printf("\nOs Meses Superiores aos Gastos Medios sao:\t%d", cont);
}
//********************************************************************************************************
void VER_MES(int gastos[MESES])
{
    int i,mes;

    printf("\nDiga o Mes que Pretende ver os gastos[1...12]:\t");   scanf("%d",&mes);

    if (mes >= 1 && mes <= 12) 
    {
        printf("\nO valor do %do mes e: \n%d",mes,gastos[mes - 1]);   //3.6. Perguntar qual o mês cujo valor pretende ver e apresentá-lo
    } else 
    {
        printf("\nMês inválido! Digite um valor entre 1 e 12.\t");
    }
}
//********************************************************************************************************
int MENU()
{
    int op;
	system("cls");
    printf("\nMenu:\n");
    printf("\n1-Calcular a Media\n");
    printf("\n2-Ver Mes com o Maior Gasto\n");
    printf("\n3-Ver os Meses com Gastos Maior que os Gastos Medios\n");
    printf("\n4-Ver o Valor de um Dos Meses\n");
    printf("\n0-SAIR\n");
    printf("\nDiga a sua Opcao:");    scanf("%d",&op);
    while( (op<0) || (op>4) )
    {
        printf("Essa opcao esta errada \nDiga a sua opcao [0...4]");    scanf("%d",&op);
    }
    return(op);
}
//********************************************************************************************************
main()
{
    int op,res,gastos[MESES],mes[MESES];

    lerarray(gastos);       imprimarray(gastos);

    do
    {
        op=MENU();

        switch(op)
        {
            case 1:    res=CALC_MEDIA_MENSAL(gastos);   break;
            case 2:    MES_SUPERIOR(gastos);            break;
            case 3:    CALC_MAIORES(gastos);            break;
            case 4:    VER_MES(gastos);                 break;
            case 0:    printf("\nObrigado por Utilizar o Nosso Programa\n Ate breve");    break;
        }
        printf("\n\n");
        system("pause");
    } while (op!=0);
}