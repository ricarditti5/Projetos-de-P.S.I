/*2. INSERIR UM ELEMENTO NO MEIO DE UM ARRAY ordenado

2.1. Declarar um array A de 10 elementos que conterá as 10 (melhores) notas de uma turma
(ordenadas decrescentemente). Inicializar o array a zero. O programa deve permitir inserir
novas notas e colocá-las ordenadamente no array (ordenado decrescentemente).
NOTA: Cada vez que for inserida uma nova nota, terá obrigatoriamente que se perder um
elemento do array (fazendo shift só a partir da posição pretendida).*/

#include"stdio.h"
#include"conio.h"

#define DIM 4


void iniciarray(int ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        ar[i]=0;
    }
}
//*****************************************************************
void imprimarray(int ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("\t%d");
    }
}
//*****************************************************************
void lerarray(int ar[DIM])
{
    int i;

    for(i=0;i<DIM;i++)
    {
        printf("Diga uma Nota:\t");    scanf("%d",&ar[i]);
    }
}
//*****************************************************************
void ord_minsucessiv_Decresc(int ar[DIM])
{
	int i,min,j,posimin,aux;


	for(i=0;i<DIM-1;i++)
	{
		posimin=i;
		min=ar[i];
		
		for(j=i+1; j<DIM;j++)
		{
			if(ar[j]>min)
			{
				min=ar[j];
				posimin=j;
			}
		}
		if(min>ar[i])
		{
			aux=ar[i];
			ar[i]=ar[posimin];
			ar[posimin]=aux;
		}
	}
}
//***********************************************************************
int haespaco(int ar[DIM]) 
{
	int i;
    for(i = 0; i < DIM; i++) 
	{
        if(ar[i] == 0) 
		{
            return i; 
        }
    }
    return -1; 
}

void shift_dir(int ar[DIM]) 
{
	int i;
    for(i = 0; i < DIM - 1; i++)
	{
        ar[i] = ar[i + 1]; 
    }
    ar[DIM - 1] = 0; 
}

void inserir_nota(int ar[DIM]) 
{
    int nova_nota, i, pos;
    
    printf("Digite a nova nota: ");
    scanf("%d", &nova_nota);
    
    pos = DIM - 1;
    for(i = 0; i < DIM; i++) {
        if(nova_nota > ar[i]) {
            pos = i;
            break;
        }
    }
    

    for(i = DIM-1; i > pos; i--) {
        ar[i] = ar[i-1];
    }
    ar[pos] = nova_nota;
}

void remover_menor_nota(int ar[DIM])
{
    if (ar[DIM-1] == 0) {
        printf("Nao ha notas para remover!\n");
    } else {
        printf("Removendo a nota mais baixa: %d\n", ar[DIM-1]);
        ar[DIM-1] = 0;
    }
}

void mostrar_notas(int ar[DIM]) 
{
    int i;
    printf("Notas atuais (ordem decrescente): ");
    for(i = 0; i < DIM; i++) {
        printf("\t%d ", ar[i]);
    }
    printf("\n");
}

main()
{
    int ar[DIM], op, cont = 0;

    iniciarray(ar);
    lerarray(ar);
    imprimarray(ar);   
    ord_minsucessiv_Decresc(ar);

    system("cls");
    do {
        printf("\nGestao de Notas\n");
        printf("1. Inserir Nova Nota\n2. Remover Menor Nota\n3. Mostrar Notas\n4. Sair\nOpcao: ");
        scanf("%d", &op);

        switch(op) {
            case 1: inserir_nota(ar); break;
            case 2: remover_menor_nota(ar); break;
            case 3: mostrar_notas(ar); break;
            case 4: printf("Saindo do programa...\n"); break;
            default: printf("Opcao invalida! Tente novamente.\n");
        }
        system("pause");
    } while(op != 4);
}