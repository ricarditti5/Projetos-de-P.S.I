// 4) Ler duas strings (apelidoPai, apelidoMae) de 10 caracteres, ler um nome próprio (nome) e construir uma 3a string
// (nomeCompleto) com o nome próprio seguido dos apelidos da mãe e do pai. Imprimir o resultado.
// Nota: tenha em atenção a dimensão da string que irá receber o resultado da concatenação das 3 strings.

#include"string.h"
#define TAM 100

void INICIANOME(char nome[TAM])
{
    int i;

    for(i=0;i<5;i++)
    {
        nome[i]='-';
    }
}
//******************************************************
void IMPRIMNOME(char nome[TAM])
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("\n%s",nome[i]);
    }
}
//******************************************************
main()
{
    char apelidoPai[10],apelidoMae[10],nome,nome1[TAM],nome2[TAM],nomeCompleto;

    INICIANOME(nome);    IMPRIMNOME(nome);

    printf("\nDiga o Apelido do Pai:"); gets(apelidoPai);
    printf("\nDiga o Apelido da Mae:"); gets(apelidoMae);

    printf("\nDiga o Nome da Mae:"); gets(nome1);
    printf("\nDiga o Nome do Pai:"); gets(nome2);

    printf("\nApelidos:\n");
    puts(apelidoMae);
    puts(apelidoPai);

    printf("\nNomes:\n");
    puts(nome1);
    puts(nome2);
}