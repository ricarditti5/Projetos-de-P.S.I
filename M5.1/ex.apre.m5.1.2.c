#include"string.h"
#include"stdio.h"


struct tipoPersona
{
    int num;
    char nome[50];
    float altura;
    float peso;
    char sexo; // M ou F
};
//************************************************
void imprimir( struct tipoPersona x)
{
    printf("\nNumero: %d\nNome:%s \nAltura:%.2f \nPeso:%.1f \nSexo:%c",x.num,x.nome,x.altura,x.peso,x.sexo);
}
//************************************************
void INICIALIZAR(struct tipoPersona *x)
{
    (*x).num=0;
    strcpy((*x).nome,0);
    (*x).altura=0;
    (*x).peso=0;
    (*x).sexo=0;
}
//************************************************
void LER(struct tipoPersona *x)
{
    printf("\nIntroduza o numero: ");  scanf("%d", &(*x).num);
    fflush(stdin);
    printf("\nIntroduza o nome: ");    gets((*x).nome);
    printf("\nIntroduza a altura: ");  scanf("%f", &(*x).altura);
    printf("\nIntroduza o peso: ");    scanf("%f", &(*x).peso);
    fflush(stdin);
    printf("\nIntroduza o sexo: ");    scanf(" %c", &(*x).sexo);
}
//************************************************
main()
{
    struct tipoPersona x= { 0,0,0,'--'};

    LER(&x);            imprimir(x);  
    INICIALIZAR(&x);    imprimir(x); 
}