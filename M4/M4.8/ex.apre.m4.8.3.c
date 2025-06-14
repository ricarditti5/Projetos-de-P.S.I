// 3) Perguntar ao utilizador quantos adeptos tem o seu clube (ler o valor). Com base no valor lido, preencher uma
// variável (tipoClube) com a palavra “Grande” se o número de adeptos for superior a 1 000 000, “Pequeno” se for inferior
// a 10 000 e “Médio” caso o clube não possa ser classificado como “grande” nem como “pequeno”. Imprimir o valor da
// variável tipoClube.

#include"string.h"
#define TAM 100

main()
{
    char tipoClube[TAM];
    int numAdeptos;

    printf("\nQuantos adeptos tem o seu clube?:");
    scanf("%d",&numAdeptos);

    if(numAdeptos>1000000)
    {
        strcpy(tipoClube,"Grande");
    }
        else if(numAdeptos<10000)
        {
            strcpy(tipoClube,"Pequeno");
        }   
            else
            {
             strcpy(tipoClube,"Medio");
            }
    puts(tipoClube);
}