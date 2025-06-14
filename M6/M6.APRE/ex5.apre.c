#include"stdlib.h"
#include"stdio.h"
#include"string.h"

main(){
    int *ap_inicio,*ap_fim, *ap_atual,*ap_novo;

    ap_inicio = (int *)malloc(7 * sizeof(int));
    ap_fim = ap_inicio + 7;

    for(ap_atual = ap_inicio;ap_atual < ap_fim; ap_atual++){
     printf("%d\t",*ap_atual);
    }
    printf("\n");
    for(ap_atual = ap_inicio;ap_atual < ap_fim;ap_atual++){
        printf("Introduza o valor a armazenar na posicao %X: ",ap_atual);
        scanf("%d",&(*ap_atual));
    }
    for(ap_atual = ap_inicio;ap_atual < ap_fim;ap_atual++){
        printf("%d\t",*ap_atual);
    }
}