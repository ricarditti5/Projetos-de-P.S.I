#include"stdlib.h"
#include"stdio.h"
#include"string.h"

main(){
    int x; int *ap;
    ap=&x;
    x=15;

    printf("O Valor de x = %d\n",x);
    printf("O Valor de *ap = %d\n",*ap);
    *ap = 32;
    printf("O Valor de x = %d\n",x);
    printf("O Valor de *ap = %d\n",*ap);
}