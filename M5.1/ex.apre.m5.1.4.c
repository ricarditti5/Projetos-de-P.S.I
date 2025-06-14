/*Este programa solicita ao usuário que insira o nome e o Salário de um funcionário.
Em seguida, exibe o nome do funcionário e o seu Salário.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    typedef struct dados_funcionario
{
    char nome[20];
    int ordenado;
}
    funcionario;
//**********************************************************************/
main() 
{
    funcionario func;

    printf("\nIntroduza o ordenado do funcionario:"); scanf("%d",&func.ordenado);

    fflush(stdin);printf("\nIntroduza o nome do funcionario:");   gets(func.nome);

    printf("\nO Funcionario %s ganha %d euros",func.nome,func.ordenado);
}