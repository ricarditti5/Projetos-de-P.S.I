//5) Ler o nome de um clube e imprimi-lo primeiro em minúsculas e depois em maiúsculas.

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
    char clube[TAM];

    printf("\nDiga o Nome do Clube:"); gets(clube);

    printf("\nClube:\n");
    puts(clube);

    printf("\nClube em Minusculas:\n");
    strlwr(clube);
    puts(clube);

    printf("\nClube em Maiusculas:\n");
    strupr(clube);
    puts(clube);
}