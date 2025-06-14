/*10. Inicializar com o valor 0 os elementos de um array (FILA) de 10 posições. Ler sucessivamente
para esse array o número de ordem de chegada de uma pessoa (numa repartição de finanças). O
programa deve permitir duas operação contínuas (procedimento CHEGAR e procedimento
DESPACHAR) que vai atualizando o array conforme as pessoas vão chegando e sendo
atendidas.*/
#include "stdio.h"
#include "stdlib.h"
#define DIM 10

void inicializarfila(int fila[DIM])
 {
 	int i;
    for(i = 0; i < DIM; i++) 
	{
        fila[i] = 0;
    }
}

int haespaco(int fila[DIM]) 
{
	int i;
    for(i = 0; i < DIM; i++) 
	{
        if(fila[i] == 0) 
		{
            return i; 
        }
    }
    return -1; 
}

void shift_dir(int fila[DIM]) 
{
	int i;
    for(i = 0; i < DIM - 1; i++)
	{
        fila[i] = fila[i + 1]; 
    }
    fila[DIM - 1] = 0; 
}

void chegar(int fila[DIM], int *cont) 
{
	
    int pos;
	
	pos = haespaco(fila);
    
    if (pos >= 0)
	 {
        *cont = *cont + 1;
        fila[pos] = *cont;  
    } 
	else 
	{
        printf("A fila esta preenchida\n");
    }
}

void despachar(int fila[DIM])
 {
    if (fila[0] == 0) 
	{
        printf("A fila esta vazia!\n");
    } else {
        printf("Despachando a pessoa com numero de ordem: %d\n", fila[0]);
        shift_dir(fila);
    } 
}

void mostrarFila(int fila[DIM]) 
{
	int i;
    printf("Estado atual da fila: ");
    for(i = 0; i < DIM; i++) 
	{
        printf("%d ", fila[i]);
    }
    printf("\n");
}

int main() 
{
    int fila[DIM], cont = 0, opcao;
       
    inicializarfila(fila);

    do {
        printf("Escolha uma opcao:\n1. CHEGAR\n2. DESPACHAR\n3. MOSTRAR FILA\n4. SAIR\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao)
		 {
            case 1: chegar(fila, &cont); break;
            case 2: despachar(fila); break;
            case 3: mostrarFila(fila); break;
            case 4: printf("Saindo do programa...\n"); break;
            default: printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 4);

}
