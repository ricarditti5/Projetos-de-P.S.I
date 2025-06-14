/*5. (Array de estruturas)
5.1. Declare um array de estruturas, de modo a poder guardar vários registos do tipo funcionário (com nome e
ordenado)
5.2. chame um procedimento (imprimir) para imprimir todos os dados do array.
5.3. Elabore uma função que, após ser invocada no programa principal, calcule e devolva o valor médio dos
ordenados dos funcionários. Imprima esse valor.
5.4. Elabore um procedimento que, após ser invocado no programa principal, pesquise todos os dados de um
funcionário, através da introdução do seu nome.
5.5. Altere o programa principal de modo a criar um menu que execute cada um dos procedimentos anteriormente
referidos.
5.6. Acrescente a possibilidade de ler de novo os dados do array.*/

#include"stdio.h"
#include"conio.h"
#include"string.h"

#define DIM 2

struct tipoFuncionario
{
    char nome[50];
    float salario;
};
//*****************************************************/
void imprimir(struct tipoFuncionario func[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\nNome: %s",func[i].nome);
        printf("\nSalario: %.2f",func[i].salario);
    }
}
//*****************************************************/
float media_salarios(struct tipoFuncionario func[DIM])
{
    int i;
    float soma=0;

    for(i=0;i<DIM;i++)
    {
        soma+=func[i].salario;
    }
    return soma/DIM;
}
//*****************************************************/
void pesquisar(struct tipoFuncionario func[DIM])
{
    char nome[50];
    char aux[50];
    int i, existe=0;

    printf("\nIntroduza o nome do funcionario a pesquisar: ");
    fflush(stdin);gets(nome);strupr(nome);


    for(i=0;i<DIM;i++)
    {
        strcpy(aux,func[i].nome);
        strupr(aux);
        if(strcmp(nome,aux)==0)
        {
            printf("\nNome: %s",func[i].nome);
            printf("\nSalario: %.2f",func[i].salario);
        }
    }
    if(existe==0)
    {
        printf("\nFuncionario nao Encontrado!");
    }
}
//*****************************************************/
void menu(struct tipoFuncionario func[DIM])
{
    int op;

    do
    {
        printf("\n1. Imprimir\n2. Media dos salarios\n3. Pesquisar\n4. Sair\nOpcao: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1: imprimir(func); break;
            case 2: printf("\nMedia dos salarios: %.2f",media_salarios(func)); break;
            case 3: pesquisar(func); break;
            case 4: printf("\nSaindo do programa..."); break;
        }
    }while(op!=4);
}
//*****************************************************/
void ler_dados(struct tipoFuncionario func[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        fflush(stdin);
        printf("\nIntroduza o nome do funcionario: ");
        fflush(stdin);gets(func[i].nome);
        printf("\nIntroduza o salario do funcionario: ");
        scanf("%f",&func[i].salario);
    }
}
//*****************************************************/
main()
{
    struct tipoFuncionario func[DIM];

    ler_dados(func);
    menu(func);
    ler_dados(func);
    menu(func);
    getch();
}