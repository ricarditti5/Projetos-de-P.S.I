// 2) Ler o título de um filme e dizer qual o comprimento desse título (quantos caracteres tem).


#include"string.h"
#define TAM 100

void LERSTR_e_MOSTARSTR(char filme[TAM])
{
    printf("\nDiga o Titulo de um Filme: ");
    gets(filme);
    printf("\n O Filme %s tem %d caracteres", filme, strlen(filme));
}
main()
{
    char filme[TAM];
    
    LERSTR_e_MOSTARSTR(filme);
}