/*Defina uma Estrutura TipoViatura, que permita guaradar os seguintes dados:
    -Matrícula
    -Cor
    -Marca
    cilindrada
    Imagine outro tipo de dados TipoProprietário para guardar:
    Nome
    Morada
    e Defina este tipo de dados.
    1.1- Declare uma unica variavel do tipo viatura, acrescente no TipoViatura um campo para identificar o dono do TipoProprietário
    1.2-Elabora um programa que permita ler todos os dados de uma viatura e permita imprimir os dados no ecrâ.
*/

#include"stdio.h"
#include"conio.h"
#include"string.h"

//*************************************************** */

typedef struct Proprietario
{
    char nome[20];
    char morada[100];
} TipoProprietario;
//*************************************************** */
typedef struct Viatura
{
    char matricula[20];
    char cor[15];
    char marca[20];
    int cilindrada;
    TipoProprietario proprietario;
} TipoViatura;
//*************************************************** */
void inicializarViatura(TipoViatura *vv)
{
    strcpy((*vv).matricula, "-");
    strcpy((*vv).cor, "-");
    strcpy((*vv).marca, "-");
    (*vv).cilindrada = 0;
}
//*************************************************** */
void inicializarProprietario(TipoProprietario *pp)
{
    strcpy((*pp).nome, "-");
    strcpy((*pp).morada, "-");
}
//*************************************************** */
void mostrarV(TipoViatura vv)
{
    puts(vv.matricula);
    puts(vv.cor);
    puts(vv.marca);
    printf("\n%d", vv.cilindrada);
    fflush(stdin);
}
//*************************************************** */
void mostrarP(TipoProprietario pp)
{
    puts(pp.nome);
    puts(pp.morada);
    fflush(stdin);
}
//*************************************************** */
main()
{
    TipoViatura vv;
    TipoProprietario pp;

    inicializarViatura(&vv);
    mostrarV(vv);
    inicializarProprietario(&pp);
    mostrarP(pp);

    /*Viatura*/
    printf("\n\nIntroduza a matricula: ");
    gets(vv.matricula);
    printf("\nIntroduza a cor: ");
    gets(vv.cor);
    printf("\nIntroduza a marca: ");
    gets(vv.marca);
    printf("\nIntroduza a cilindrada: ");
    scanf("%d", &vv.cilindrada);

    /*Proprietário*/
    printf("\nIntroduza o nome do proprietario: ");
    fflush(stdin);
    gets(pp.nome);
    printf("\nIntroduza a morada do proprietario: ");
    gets(pp.morada);
    fflush(stdin);

    /*Mostrar*/
    printf("Viatura:\n");
    mostrarV(vv);
    printf("Proprietario:\n");
    mostrarP(pp);
}