/*1. Fazer um programa que leia para um array as idades de 5 empregados de uma empresa e faça
procedimentos para:
1.1. Limpar o array (LIMPAR)
1.2. Calcular a media de idades (procedimento CALC_MEDIA).
1.3. Calcular quantos são maiores de idade, i.e. têm idade superior a 18 anos (CALC_MAIORES)
1.4. Mostrar a idade do empregado mais velho (procedimento CALC_MAIOR).
NOTA: assuma inicialmente que o maior é o 1o elemento.
1.5. Mostrar a idade do empregado mais novo (procedimento CALC_MENOR).
1.6. Juntar todas as alíneas anteriores num único programa. Colocar uma constante DIM com o
valor 5 e usá-la em todo o programa.*/

#include"stdio.h"
#include"conio.h"

#define NE 5 // NE-Numero de Empregados

void imprimarray (int idade[NE])
{
    int i;

    for (i=0;i<NE;i++)
    {
        printf("\t%d",idade[i]);
    }
}
//**************************************************************************************************
void limpararray (int idade[NE])
{
    int i;

    for (i=0;i<NE;i++)
    {
        idade[i]=0;
    }
}
//**************************************************************************************************
void lerarray(int idade[NE])
{
    int i;

    for (i=0;i<NE;i++)
    {
        printf("\nDiga a Idade do %do Empregado:",i+1); scanf("%d",&idade[i]);
    }
}
//**************************************************************************************************
void CALC_MEDIA(int idade[NE])
{
    int i;
    float res=0;

    for(i=0;i<NE;i++)
    {
        res=res+idade[i];
    }
    printf("\nA Media e: %.2f",res/NE);
}
//**************************************************************************************************
void CALC_MAIORES(int idade[NE]) //1.3. Calcular quantos são maiores de idade, i.e. têm idade superior a 18 anos (CALC_MAIORES)
{
    int i,cont=0;

    for(i=0;i<NE;i++)
    {
        if (idade[i]>=18)
        {
            cont++;
        }
    }
    printf("\nOs Numeros Acima de 18 Sao:%d",cont); 
}
//**************************************************************************************************
void CALC_MAIOR(int idade[NE]) //1.4. Mostrar a idade do empregado mais velho (procedimento CALC_MAIOR).
{
    int i,maior=0,aux;

    for(i=0;i<NE;i++)
    {
        
		if(idade[i]>maior)
		{
			maior=idade[i];
			aux=i;
		}
    }
    printf("\nO Empregado mais velho esta na  %do Posicao",aux+1); 
}
//**************************************************************************************************
void CALC_MENOR(int idade[NE]) //1.5. Mostrar a idade do empregado mais novo (procedimento CALC_MENOR).
{
    int i,menor;

    menor=idade[i];

    for(i=0;i<NE;i++)
    {
        
		if(idade[i]<menor)
		{
			menor=idade[i];
		}
    }
    printf("\nA Idade do Mais Novo e: \t%d",menor); 
}
//**************************************************************************************************
main()
{
    int idade[NE];

    limpararray(idade);     imprimarray (idade);

    lerarray(idade);        imprimarray (idade);

    CALC_MEDIA(idade);      imprimarray (idade);

    CALC_MAIORES(idade);

    CALC_MAIOR(idade);   

    CALC_MENOR(idade);
}