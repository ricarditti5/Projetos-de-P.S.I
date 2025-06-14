/*6) Perguntar ao utilizador qual é a capital de Portugal e dizer-lhe se acertou ou não.
Nota: tenha em atenção o facto de o utilizador poder ter ligada a tecla CapsLock.*/
#include"stdio.h"
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
    char capital[TAM];

    printf("\nQual e a Capital de Portugal?:\n"); gets(capital);

    if(strcmp(capital,"Lisboa")==0)
    {
        printf("\nAcertou!");
    }
        else
        {
            printf("\nErrou!");
        }
}