#include"stdio.h"
#include"stdlib.h"

main(){
    int a,b;
    int *pt;

    b=4;
    pt=&b;
    a=*pt;

    printf("\nO Conteudo de A e: %d",a);
    printf("\nO endereco de A e:%x",&a);
    printf("\nO Conteudo de pt e :%x",pt);
    printf("\nO Endereco de pt e:%x",&pt);
    printf("\nO COnteudo do elemento apontado por pt e %d",*pt);
    printf("\nO Conteudo de b e %d",b);
    printf("\nO endereco de b e %x",&b);
}