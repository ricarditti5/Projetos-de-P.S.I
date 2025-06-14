// 1) Declarar e inicializar uma string (ditado) com a frase “A morte do homem começa no instante em que ele desiste
// de aprender.”. Imprimir o 20o carácter da frase.

#include"string.h"
#define TAM 100

main()
{
    char ditado[TAM] = "A morte do homem comeca no instante em que ele desiste de aprender.";

    printf("%c",ditado[19]);
}