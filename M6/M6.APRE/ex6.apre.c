#include"stdlib.h"
#include"stdio.h"

main(){
    int *ap;
    ap = (int*)malloc(1 * sizeof(int));

    *ap = 21;
    printf("%d\n", *ap);

    *ap=(*ap)*5;
    printf("%d\n", *ap);
    
    free(ap);
}