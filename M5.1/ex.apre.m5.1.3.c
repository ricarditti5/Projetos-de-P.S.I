/*Este programa define duas estruturas: dados_pessoa e dados_empresa. 
 A estrutura dados_pessoa armazena informações sobre uma pessoa, incluindo o seu nome e idade. 
 A estrutura dados_empresa armazena informações sobre uma empresa, incluindo o nome da empresa, 
 número de trabalhadores, ordem mínima, e o dono (que é uma estrutura dados_pessoa).*/
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct dados_pessoa
{
    char nome[20];
    int idade;
}
//***************************************************************** */
    pessoa;
    typedef struct dados_empresa
//***************************************************************** */
{
    char nomeempresa[20];
    int numtrab;
    int ordmin;
    struct dados_pessoa dono;
}
empresa;
//***************************************************************** */
main() 
{
    empresa sonix;
    strcpy(sonix.nomeempresa,"Sonix");
    sonix.numtrab=101;
    sonix.ordmin=472;
    sonix.dono.idade=50;
    strcpy(sonix.dono.nome,"Ja Quim");
    printf("\n\nA empresa %s, cujo dono e o Sr. %s, tem %d trabalhadores",sonix.nomeempresa,sonix.dono.nome,sonix.numtrab);
}