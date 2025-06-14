#include"stdio.h"
#include"stdlib.h"

main()
{
float x,y;
float *pt;

x=3;
pt=&x;
y=*pt;

printf("\n O conteudo de x e %.2f",x);
printf("\n O endereco de x e %X",&x);
printf("\n O conteudo de pt e %X",pt);
printf("\n O endereco de pt e %X",&pt);
printf("\n O conteudo do elemento/endereço apontado por pt e %.2f",*pt);
printf("\n O conteudo de y e %.2f",y);
printf("\n O endereco de y e %X",&y);
}